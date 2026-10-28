// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$ChangeTab
// address: 0x4300c14
// body: available
// range: 0x4300c14-0x4300e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4300e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__ChangeTab(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((DAT_09517546 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0468);
    FUN_03f5c2a4(&DAT_09185158);
    FUN_03f5c2a4(&DAT_0917e0e8);
    FUN_03f5c2a4(&DAT_091f15d8);
    FUN_03f5c2a4(&DAT_091955f0);
    FUN_03f5c2a4(&DAT_0918c420);
    DAT_09517546 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091955f0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    *puVar7 = param_2;
    thunk_FUN_03f5d7b8(puVar7,param_2);
    CakeOrder_BaseUI_UITabGroupControl__ChangeTab(param_1,*puVar7,0);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e0e8);
    FUN_05d78cfc(uVar3,lVar2,DAT_091f15d8,0);
    plVar4 = (long *)FUN_04ee3a54(uVar8,uVar3,DAT_091c0468);
    lVar2 = DAT_0918c420;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_0918c420 + 0x130);
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar4;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918c420) {
          plVar6 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0xa8) = plVar6;
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar4 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0xa8,plVar4);
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x80),0), lVar2 != 0)) {
      UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(param_1 + 0x88),1,0);
      local_58 = DAT_09185158;
      uVar8 = *puVar7;
      local_48 = 1;
      uStack_50 = 0xffffffffffffffff;
      uVar3 = System_Enum__ToString(&local_58,0);
      uVar5 = System_String__op_Equality(uVar8,uVar3,0);
      if ((uVar5 & 1) != 0) {
        CakeOrder_Home_UIHomeNavControl__SetJourneyNoti(param_1,0);
      }
      CakeOrder_Home_UIHomeNavControl__ResizeTabs(param_1,1);
      CakeOrder_Home_UIHomeNavControl__ParkHighlight(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

