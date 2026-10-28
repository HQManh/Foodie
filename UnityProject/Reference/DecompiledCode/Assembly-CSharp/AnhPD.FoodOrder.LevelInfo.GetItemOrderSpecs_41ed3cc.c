// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$GetItemOrderSpecs
// address: 0x41ed3cc
// body: available
// range: 0x41ed3cc-0x41ed593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ed590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__GetItemOrderSpecs(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  if ((DAT_09516b3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b3c = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar3 & 1) == 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917c850);
    FUN_057ee92c(lVar5,DAT_091aed10);
    if (param_2 != (long *)0x0) {
      uVar7 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      local_d0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor(&local_110,uVar7,param_2[0xf],0);
      if (lVar5 != 0) {
        memcpy(auStack_c0,&local_110,0x48);
        lVar2 = DAT_091aed20;
        lVar6 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x48;
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            memcpy((void *)(lVar6 + 0x20),auStack_c0,0x48);
            thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
          }
          else {
            uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            memcpy(auStack_78,auStack_c0,0x48);
            FUN_057ef254(lVar5,auStack_78,uVar7);
          }
          return lVar5;
        }
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x041ed478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x1c0));
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

