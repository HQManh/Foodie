// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetGameObjectsIterate
// address: 0x450026c
// body: available
// range: 0x450026c-0x45005fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45005bc to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45005f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_ObjectPoolDictArray__GetGameObjectsIterate
          (long param_1,long param_2,int param_3,undefined4 param_4,long param_5,long param_6)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_09518497 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d208);
    FUN_03f5c2a4(&DAT_0919d210);
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091acd68);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518497 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((param_5 != 0) && ((uVar4 & 1) == 0)) {
    if (param_2 != 0) {
      uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = FUN_05797528(*(long *)(param_1 + 0x20),uVar3,DAT_091adcb0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_045005f8;
          uVar4 = FUN_06ef0700(*(long *)(param_1 + 0x28),uVar3,DAT_0919d210);
          lVar9 = DAT_091adc88;
          if ((uVar4 & 1) == 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) goto LAB_045005f8;
            lVar7 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_045005f8;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
            }
            else {
              FUN_057971a8(lVar5,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *(long *)(param_1 + 0x28);
            uVar6 = thunk_FUN_03f9944c(DAT_0917c1f0);
            FUN_057e0400(uVar6,DAT_091acd38);
            if (lVar9 == 0) goto LAB_045005f8;
            FUN_06ef050c(lVar9,uVar3,uVar6,DAT_0919d208);
          }
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar9 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar3,DAT_0919d220);
          if (lVar9 != 0) {
            iVar10 = 0;
            iVar8 = *(int *)(lVar9 + 0x18) + -1;
            bVar1 = 0 < param_3;
            if ((-1 < iVar8) && (0 < param_3)) {
              iVar10 = 0;
              do {
                lVar5 = FUN_057e0998(lVar9,iVar8,DAT_091acd88);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
                if ((uVar4 & 1) == 0) {
                  if (lVar5 == 0) goto LAB_045005f8;
                  uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
                  if ((uVar4 & 1) == 0) {
                    UnityEngine_GameObject__SetActive(lVar5,1,0);
                    (**(code **)(param_5 + 0x18))
                              (*(undefined8 *)(param_5 + 0x40),lVar5,*(undefined8 *)(param_5 + 0x28)
                              );
                    iVar10 = iVar10 + 1;
                  }
                }
                else {
                  FUN_057e2274(lVar9,lVar5,DAT_091acd68);
                }
                bVar1 = iVar10 < param_3;
              } while ((0 < iVar8) && (iVar8 = iVar8 + -1, iVar10 < param_3));
            }
            if (bVar1) {
              uVar6 = Utilities_ObjectPoolDictArray__<GetGameObjectsIterate>g__IESpawnGameObjectIterate_30_0
                                (param_1,lVar9,param_2,param_3 - iVar10,param_4,param_5,param_6);
              uVar6 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar6,0);
              return uVar6;
            }
            goto LAB_045005c0;
          }
        }
      }
    }
LAB_045005f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_045005c0:
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x18))(*(undefined8 *)(param_6 + 0x40),*(undefined8 *)(param_6 + 0x28));
  }
  return 0;
}

