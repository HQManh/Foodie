// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$PlayFullUpgradeConfetti
// address: 0x4314990
// body: available
// range: 0x4314990-0x4314b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4314b28 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4314b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeBuildingFadeScale__PlayFullUpgradeConfetti
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_095175de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a40);
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095175de = 1;
  }
  CakeOrder_Home_HomeMapBuildingBase__PlayFirework(param_4);
  uVar6 = *(undefined8 *)(param_4 + 0x90);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = UnityEngine_Component__get_gameObject(param_4,0);
  if (lVar3 != 0) {
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = CakeOrder_Home_HomeBuildingFadeScale__CollectBoughtPartSpots(param_4);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
LAB_04314acc:
        lVar4 = *(long *)(param_4 + 0xd0);
        if (lVar4 != 0) {
          UnityEngine_MonoBehaviour__StopCoroutine(param_4,lVar4,0);
        }
        uVar6 = CakeOrder_Home_HomeBuildingFadeScale__BuildConfettiShots(param_1,param_4,lVar3);
        uVar6 = CakeOrder_Home_HomeBuildingFadeScale__ConfettiRoutine(param_4,uVar6);
        uVar6 = UnityEngine_MonoBehaviour__StartCoroutine(param_4,uVar6,0);
        *(undefined8 *)(param_4 + 0xd0) = uVar6;
        thunk_FUN_03f5d7b8((long *)(param_4 + 0xd0));
        return;
      }
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 != 0) {
        uVar7 = UnityEngine_Transform__get_position(lVar4,0);
        lVar4 = DAT_091b1a40;
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar5 + 0x20) = uVar7;
            *(undefined4 *)(lVar5 + 0x24) = param_2;
            *(undefined4 *)(lVar5 + 0x28) = param_3;
          }
          else {
            FUN_058b1914(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_04314acc;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

