// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetGameObjectsIterate
// address: 0x45006dc
// body: available
// range: 0x45006dc-0x4500b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4500ae8 to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4500b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_ObjectPoolDictArray__GetGameObjectsIterate
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
          int param_10,undefined4 param_11,long param_12,long param_13)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  
  if ((DAT_09518498 & 1) == 0) {
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
    DAT_09518498 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_9,0,0);
  if ((param_12 == 0) || ((uVar4 & 1) != 0)) {
    if (param_13 == 0) {
      return 0;
    }
    pcVar9 = *(code **)(param_13 + 0x18);
    uVar6 = *(undefined8 *)(param_13 + 0x40);
    uVar7 = *(undefined8 *)(param_13 + 0x28);
LAB_04500b00:
    (*pcVar9)(uVar6,uVar7);
    return 0;
  }
  if (param_9 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID(param_9,0);
    if (*(long *)(param_8 + 0x20) != 0) {
      uVar4 = FUN_05797528(*(long *)(param_8 + 0x20),uVar3,DAT_091adcb0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_8 + 0x28) == 0) goto LAB_04500b38;
        uVar4 = FUN_06ef0700(*(long *)(param_8 + 0x28),uVar3,DAT_0919d210);
        lVar12 = DAT_091adc88;
        if ((uVar4 & 1) == 0) {
          lVar5 = *(long *)(param_8 + 0x20);
          if (lVar5 == 0) goto LAB_04500b38;
          lVar8 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04500b38;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
          }
          else {
            FUN_057971a8(lVar5,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)(param_8 + 0x28);
          uVar6 = thunk_FUN_03f9944c(DAT_0917c1f0);
          FUN_057e0400(uVar6,DAT_091acd38);
          if (lVar12 == 0) goto LAB_04500b38;
          FUN_06ef050c(lVar12,uVar3,uVar6,DAT_0919d208);
        }
      }
      if ((*(long *)(param_8 + 0x28) != 0) &&
         (lVar12 = FUN_06ef046c(*(long *)(param_8 + 0x28),uVar3,DAT_0919d220), lVar12 != 0)) {
        iVar10 = 0;
        iVar11 = *(int *)(lVar12 + 0x18) + -1;
        bVar1 = 0 < param_10;
        if ((-1 < iVar11) && (0 < param_10)) {
          iVar10 = 0;
          do {
            lVar5 = FUN_057e0998(lVar12,iVar11,DAT_091acd88);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
            if ((uVar4 & 1) == 0) {
              if (lVar5 == 0) goto LAB_04500b38;
              uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
              if ((uVar4 & 1) == 0) {
                lVar8 = UnityEngine_GameObject__get_transform(lVar5,0);
                if (lVar8 == 0) goto LAB_04500b38;
                UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar8,0);
                UnityEngine_Transform__set_rotation(param_4,param_5,param_6,param_7,lVar8,0);
                UnityEngine_GameObject__SetActive(lVar5,1,0);
                (**(code **)(param_12 + 0x18))
                          (*(undefined8 *)(param_12 + 0x40),lVar5,*(undefined8 *)(param_12 + 0x28));
                iVar10 = iVar10 + 1;
              }
            }
            else {
              FUN_057e2274(lVar12,lVar5,DAT_091acd68);
            }
            bVar1 = iVar10 < param_10;
          } while ((0 < iVar11) && (iVar11 = iVar11 + -1, iVar10 < param_10));
        }
        if (bVar1) {
          uVar6 = Utilities_ObjectPoolDictArray__<GetGameObjectsIterate>g__IESpawnGameObjectIterate_31_0
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar12,
                             param_9,param_10 - iVar10,param_11,param_12,param_13);
          uVar6 = UnityEngine_MonoBehaviour__StartCoroutine(param_8,uVar6,0);
          return uVar6;
        }
        if (param_13 == 0) {
          return 0;
        }
        pcVar9 = *(code **)(param_13 + 0x18);
        uVar6 = *(undefined8 *)(param_13 + 0x40);
        uVar7 = *(undefined8 *)(param_13 + 0x28);
        goto LAB_04500b00;
      }
    }
  }
LAB_04500b38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

