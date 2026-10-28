// rea decompile_all
// name: System.String$$LastIndexOfUncheckedIgnoreCase
// address: 0x7436304
// body: available
// range: 0x7436304-0x74364a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74364a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__LastIndexOfUncheckedIgnoreCase
                (long param_1,long param_2,uint param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  
  uVar8 = (ulong)param_3;
  if ((DAT_09521038 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521038 = 1;
  }
  if (param_2 == 0) goto LAB_074364a0;
  iVar6 = *(int *)(param_2 + 0x10);
  lVar10 = (long)iVar6;
  if (iVar6 <= (int)param_4) {
    if (iVar6 == 0) goto LAB_074363d4;
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (plVar7 == (long *)0x0) {
LAB_074364a0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    iVar6 = thunk_FUN_03f68190(0);
    if (plVar7 == (long *)0x0) goto LAB_074364a0;
    puVar1 = (undefined2 *)(param_2 + iVar6) + lVar10 + -1;
    sVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*puVar1,*(undefined8 *)(*plVar7 + 0x1d0));
    if (lVar10 * 2 - 2U != (-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1)) {
      uVar9 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1;
      puVar11 = (undefined2 *)(param_1 + (long)(int)param_3 * 2 + 0x14);
      puVar2 = puVar11 + ((lVar10 + -1) - (long)(int)param_4);
      do {
        sVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*puVar11,*(undefined8 *)(*plVar7 + 0x1d0));
        uVar8 = uVar9;
        puVar12 = puVar1;
        if (sVar4 == sVar3) {
          do {
            if (puVar12 == (undefined2 *)(param_2 + iVar6)) {
              if ((long)uVar8 < 0) {
                uVar8 = uVar8 + 1;
              }
              uVar8 = uVar8 >> 1;
              goto LAB_074363d4;
            }
            sVar4 = (**(code **)(*plVar7 + 0x1c8))
                              (plVar7,*(undefined2 *)(param_1 + 0x12 + uVar8),
                               *(undefined8 *)(*plVar7 + 0x1d0));
            sVar5 = (**(code **)(*plVar7 + 0x1c8))
                              (plVar7,puVar12[-1],*(undefined8 *)(*plVar7 + 0x1d0));
            uVar8 = uVar8 - 2;
            puVar12 = puVar12 + -1;
          } while (sVar4 == sVar5);
        }
        puVar11 = puVar11 + -1;
        uVar9 = uVar9 - 2;
        uVar8 = 0xffffffff;
      } while (puVar11 != puVar2);
      goto LAB_074363d4;
    }
  }
  uVar8 = 0xffffffff;
LAB_074363d4:
  return uVar8 & 0xffffffff;
}

