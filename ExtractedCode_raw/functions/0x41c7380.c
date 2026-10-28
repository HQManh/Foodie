// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.LevelCreaamOnBeach1$$Start
// address: 0x41c7380
// body: available
// range: 0x41c7380-0x41c7653 inclusive
// range: 0x41c7688-0x41c77a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c778c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7794 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c7798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c77a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041c7790) */
/* WARNING: Removing unreachable block (ram,0x041c76a8) */
/* WARNING: Removing unreachable block (ram,0x041c779c) */

void Datpt_Cook_Order_CreamOnBeach_LevelCreaamOnBeach1__Start(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long local_68;
  
  if ((DAT_095169e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a2840);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a2848);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a2850);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091ac198);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_0918c980);
    DAT_095169e0 = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  lVar1 = UnityEngine_Camera__get_main(0);
  param_1[0x3d] = lVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x3d,lVar1);
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    return;
  }
  if (param_1[0x3b] != 0) {
    FUN_0574e62c(&local_e0,param_1[0x3b],DAT_091ac198);
    puStack_78 = puStack_d8;
    local_80 = local_e0;
    local_68 = lStack_c8;
    local_70 = local_d0;
    while (uVar2 = FUN_0719ad54(&local_80,DAT_091a2848), lVar1 = local_68, uVar4 = local_70,
          (uVar2 & 1) != 0) {
      iVar5 = (int)local_70;
      (**(code **)(*param_1 + 0x328))
                (param_1,(int)param_1[0x3c],1,*(undefined8 *)(*param_1 + 0x330));
      (**(code **)(*param_1 + 0x328))
                (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x330))
      ;
      if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x328))
                  (param_1,uVar4 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
      }
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0579a6a8(&local_e0,lVar1,DAT_091ac7f8);
      local_a0 = local_e0;
      local_e0 = 0;
      puStack_98 = puStack_d8;
      local_90 = local_d0;
      puStack_d8 = &local_a0;
      while (uVar3 = FUN_071aef5c(&local_a0,DAT_091a2b18), uVar2 = local_90, (uVar3 & 1) != 0) {
        (**(code **)(*param_1 + 0x328))
                  (param_1,local_90 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
        lVar1 = param_1[0x44];
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_Utilities__AddToDictionary(lVar1,uVar2 & 0xffffffff,1,0);
      }
      FUN_071aef58(&local_a0,DAT_091a2b10);
      if (iVar5 != 0) {
        lVar1 = param_1[0x43];
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_Utilities__AddToDictionary(lVar1,uVar4 & 0xffffffff,1,0);
      }
      lVar6 = param_1[0x43];
      lVar1 = param_1[0x3c];
      if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Datpt_Utilities__AddToDictionary(lVar6,(int)lVar1,1,0);
    }
    FUN_0719ad50(&local_80,DAT_091a2840);
    if (param_1[0x43] != 0) {
      FUN_06f2d6f4(&local_c0,param_1[0x43],DAT_0919cab0);
      iVar5 = 0;
      local_e0 = 0;
      puStack_d8 = &local_c0;
      while (uVar4 = FUN_0726063c(&local_c0,DAT_091a5da0), (uVar4 & 1) != 0) {
        iVar5 = iVar5 + uStack_b0._4_4_;
      }
      FUN_07260744(&local_c0,DAT_091a5d98);
      if (param_1[0x44] != 0) {
        FUN_06f2d6f4(&local_e0,param_1[0x44],DAT_0919cab0);
        local_c0 = local_e0;
        local_e0 = 0;
        puStack_b8 = puStack_d8;
        lStack_a8 = lStack_c8;
        uStack_b0 = local_d0;
        puStack_d8 = &local_c0;
        while (uVar4 = FUN_0726063c(&local_c0,DAT_091a5da0), (uVar4 & 1) != 0) {
          iVar5 = iVar5 + 1;
        }
        FUN_07260744(&local_c0,DAT_091a5d98);
        Datpt_Cook_Order_LevelControlCookOrder__AddItemNum(param_1,iVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

