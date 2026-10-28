// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$ContentsEqual
// address: 0x76d7a5c
// body: available
// range: 0x76d7a5c-0x76d7d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d7d20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Linq_JContainer__ContentsEqual(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_095227a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_0917b0b0);
    DAT_095227a5 = 1;
  }
  if (param_2 == param_1) {
    return true;
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  if ((param_2 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*param_2 + 0x5e8))(param_2,*(undefined8 *)(*param_2 + 0x5f0)),
     plVar4 != (long *)0x0)) {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d7b34;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a0c0,0);
LAB_076d7b34:
    iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d7b94;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a0c0,0);
LAB_076d7b94:
      iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar2 != iVar3) {
        return false;
      }
      iVar2 = 0;
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076d7c00;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a0c0,0);
LAB_076d7c00:
        iVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        bVar1 = iVar3 <= iVar2;
        if (iVar3 <= iVar2) {
          return true;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b0b0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076d7c64;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b0b0,0);
LAB_076d7c64:
        plVar7 = (long *)(*(code *)*puVar6)(plVar4,iVar2,puVar6[1]);
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b0b0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076d7cc4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b0b0,0);
LAB_076d7cc4:
        uVar8 = (*(code *)*puVar6)(plVar5,iVar2,puVar6[1]);
        if (plVar7 == (long *)0x0) break;
        uVar10 = (**(code **)(*plVar7 + 0x218))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x220));
        iVar2 = iVar2 + 1;
        if ((uVar10 & 1) == 0) {
          return bVar1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

