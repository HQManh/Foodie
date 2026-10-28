// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$PrePooling
// address: 0x44fd800
// body: available
// range: 0x44fd800-0x44fdba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44fdba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectPoolDictArray__PrePooling
               (long param_1,long param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_48;
  
  if ((DAT_09518485 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d208);
    FUN_03f5c2a4(&DAT_0919d6a0);
    FUN_03f5c2a4(&DAT_0919d6a8);
    FUN_03f5c2a4(&DAT_0919d218);
    FUN_03f5c2a4(&DAT_0919d6c0);
    FUN_03f5c2a4(&DAT_0919d6c8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091acd48);
    FUN_03f5c2a4(&DAT_091acd78);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd90);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518485 = 1;
  }
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((param_3 < 1) || ((uVar5 & 1) != 0)) {
    if (param_5 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x044fd9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x18))(*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28));
    return;
  }
  if (param_2 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
    local_48 = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar5 = FUN_06ef1fe8(*(long *)(param_1 + 0x28),uVar3,&local_48,DAT_0919d218);
      lVar9 = local_48;
      if ((uVar5 & 1) == 0) {
        lVar6 = thunk_FUN_03f9944c(DAT_0917c1f0);
        FUN_057e0478(lVar6,param_3,DAT_091acd48);
        lVar9 = DAT_091adc88;
        lVar7 = *(long *)(param_1 + 0x20);
        local_48 = lVar6;
        if (lVar7 == 0) goto LAB_044fdba0;
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_044fdba0;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
        }
        else {
          FUN_057971a8(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_044fdba0;
        FUN_06ef050c(*(long *)(param_1 + 0x28),uVar3,local_48,DAT_0919d208);
      }
      else {
        if ((local_48 == 0) || (iVar4 = FUN_057e07d0(local_48,DAT_091acd78), local_48 == 0))
        goto LAB_044fdba0;
        iVar1 = *(int *)(local_48 + 0x18) + param_3;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        FUN_057e07e8(lVar9,iVar4,DAT_091acd90);
      }
      if (param_4 < 1) {
        Utilities_ObjectPoolDictArray__InstantPrePooling(param_1,param_2,param_3);
        if (param_5 == 0) {
          return;
        }
        (**(code **)(param_5 + 0x18))
                  (*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28));
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar5 = FUN_06ef0700(*(long *)(param_1 + 0x38),uVar3,DAT_0919d6a8);
        lVar9 = *(long *)(param_1 + 0x38);
        if ((uVar5 & 1) == 0) {
          uVar8 = Utilities_ObjectPoolDictArray__IEPrePooling
                            (param_1,param_2,param_3,param_4,param_5);
          uVar8 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar8,0);
          if (lVar9 != 0) {
            FUN_06ef050c(lVar9,uVar3,uVar8,DAT_0919d6a0);
            return;
          }
        }
        else if (lVar9 != 0) {
          lVar9 = FUN_06ef046c(lVar9,uVar3,DAT_0919d6c0);
          if (lVar9 != 0) {
            UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar9,0);
          }
          lVar9 = *(long *)(param_1 + 0x38);
          uVar8 = Utilities_ObjectPoolDictArray__IEPrePooling
                            (param_1,param_2,param_3,param_4,param_5);
          uVar8 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar8,0);
          if (lVar9 != 0) {
            FUN_06ef04f8(lVar9,uVar3,uVar8,DAT_0919d6c8);
            return;
          }
        }
      }
    }
  }
LAB_044fdba0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

