// rea decompile_all
// name: Utilities.Vfx2dTransform$$Play
// address: 0x451b450
// body: available
// range: 0x451b450-0x451b6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451b6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Vfx2dTransform__Play(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  long *local_28;
  
  if ((DAT_0951858f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdc48);
    FUN_03f5c2a4(&DAT_09186248);
    DAT_0951858f = 1;
  }
  local_28 = (long *)0x0;
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar2,0);
    }
    uVar3 = Utilities_Vfx2dTransform__IEPlayAnim(param_1);
    uVar3 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x60),uVar3);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar4 = FUN_04b7d49c(*(long *)(param_1 + 0x58),&local_28,DAT_091cdc48);
      plVar1 = local_28;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (local_28 != (long *)0x0) {
        lVar2 = *local_28;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186248) {
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0451b56c;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186248,2);
LAB_0451b56c:
        (*(code *)*puVar5)(plVar1,puVar5[1]);
        plVar1 = local_28;
        if (local_28 != (long *)0x0) {
          lVar2 = *local_28;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09186248) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_0451b5d0;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186248,3);
LAB_0451b5d0:
          (*(code *)*puVar5)(plVar1,puVar5[1]);
          plVar1 = local_28;
          if (local_28 != (long *)0x0) {
            lVar2 = *local_28;
            uVar7 = *(undefined4 *)(param_1 + 0x2c);
            uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_09186248) {
                  puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                  goto LAB_0451b638;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186248,5);
LAB_0451b638:
            (*(code *)*puVar5)(uVar7,plVar1,puVar5[1]);
            plVar1 = local_28;
            if (local_28 != (long *)0x0) {
              lVar2 = *local_28;
              uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar4 != 0) {
                piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_09186248) {
                    puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_0451b6a0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186248,1);
LAB_0451b6a0:
              (*(code *)*puVar5)(plVar1,puVar5[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

