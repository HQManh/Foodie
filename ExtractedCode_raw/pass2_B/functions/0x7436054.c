// rea decompile_all
// name: System.String$$IndexOfUncheckedIgnoreCase
// address: 0x7436054
// body: available
// range: 0x7436054-0x7436227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7436224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__IndexOfUncheckedIgnoreCase(long param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined2 *puVar15;
  
  uVar13 = param_3 & 0xffffffff;
  if ((DAT_09521037 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521037 = 1;
  }
  if (param_2 == 0) goto LAB_07436224;
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((int)uVar3 <= param_4) {
    if (uVar3 == 0) goto LAB_07436138;
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (plVar9 == (long *)0x0) {
LAB_07436224:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
    iVar8 = thunk_FUN_03f68190(0);
    if (plVar9 == (long *)0x0) goto LAB_07436224;
    lVar1 = param_1 + 0x14;
    iVar12 = (int)param_3;
    puVar15 = (undefined2 *)(lVar1 + (long)iVar12 * 2);
    puVar2 = (undefined2 *)(lVar1 + ((long)param_4 + (long)iVar12) * 2 + (long)(int)uVar3 * -2 + 2);
    sVar5 = (**(code **)(*plVar9 + 0x1c8))
                      (plVar9,*(undefined2 *)(param_2 + iVar8),*(undefined8 *)(*plVar9 + 0x1d0));
    if (puVar15 != puVar2) {
      puVar11 = (undefined2 *)(param_1 + (long)iVar12 * 2 + 0x16);
      do {
        sVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*puVar15,*(undefined8 *)(*plVar9 + 0x1d0));
        if (sVar6 == sVar5) {
          puVar10 = puVar11;
          lVar14 = (ulong)uVar3 - 1;
          puVar4 = (undefined2 *)(param_2 + iVar8);
          if ((int)uVar3 < 2) {
LAB_07436210:
            uVar13 = (long)puVar15 - lVar1;
            if ((long)uVar13 < 0) {
              uVar13 = uVar13 + 1;
            }
            uVar13 = uVar13 >> 1;
            break;
          }
          while( true ) {
            sVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*puVar10,*(undefined8 *)(*plVar9 + 0x1d0))
            ;
            sVar7 = (**(code **)(*plVar9 + 0x1c8))
                              (plVar9,puVar4[1],*(undefined8 *)(*plVar9 + 0x1d0));
            if (sVar6 != sVar7) break;
            lVar14 = lVar14 + -1;
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
            if (lVar14 == 0) goto LAB_07436210;
          }
        }
        puVar15 = puVar15 + 1;
        puVar11 = puVar11 + 1;
        uVar13 = 0xffffffff;
      } while (puVar15 != puVar2);
      goto LAB_07436138;
    }
  }
  uVar13 = 0xffffffff;
LAB_07436138:
  return uVar13 & 0xffffffff;
}

