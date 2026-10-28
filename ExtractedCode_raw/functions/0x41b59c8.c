// rea decompile_all
// name: Datpt.Cook_Order.LevelCreamOnBeach$$Start
// address: 0x41b59c8
// body: available
// range: 0x41b59c8-0x41b5c9b inclusive
// range: 0x41b5cc8-0x41b5e6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b5e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e54 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b5e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041b5c94) */
/* WARNING: Removing unreachable block (ram,0x041b5c98) */
/* WARNING: Removing unreachable block (ram,0x041b5e50) */
/* WARNING: Removing unreachable block (ram,0x041b5ce8) */
/* WARNING: Removing unreachable block (ram,0x041b5e60) */

void Datpt_Cook_Order_LevelCreamOnBeach__Start(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x1;
  int iVar7;
  long lVar8;
  float fVar9;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long lStack_68;
  
  if ((DAT_0951693f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cab0);
    FUN_03f5c2a4(&DAT_091c9b10);
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a5d98);
    FUN_03f5c2a4(&DAT_091a2840);
    FUN_03f5c2a4(&DAT_091a5da0);
    FUN_03f5c2a4(&DAT_091a2848);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a5da8);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a2850);
    FUN_03f5c2a4(&DAT_09178ac8);
    FUN_03f5c2a4(&DAT_091a93c0);
    FUN_03f5c2a4(&DAT_091a93c8);
    FUN_03f5c2a4(&DAT_091ac7e0);
    FUN_03f5c2a4(&DAT_091ac198);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ecab0);
    FUN_03f5c2a4(&DAT_09192390);
    DAT_0951693f = 1;
  }
  local_90 = 0;
  lStack_88 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  Datpt_Cook_Order_LevelControlCookOrder__LevelConfigStart(param_1,0);
  lVar3 = UnityEngine_Camera__get_main(0);
  param_1[0x3d] = lVar3;
  thunk_FUN_03f5d7b8(param_1 + 0x3d,lVar3);
  if (*(char *)((long)param_1 + 0x1b1) == '\0') {
    return;
  }
  if (param_1[0x3b] != 0) {
    FUN_0574e62c(&local_f0,param_1[0x3b],DAT_091ac198);
    puStack_78 = puStack_e8;
    local_80 = local_f0;
    lStack_68 = lStack_d8;
    local_70 = local_e0;
    while (uVar4 = FUN_0719ad54(&local_80,DAT_091a2848), lVar3 = lStack_68, uVar6 = local_70,
          (uVar4 & 1) != 0) {
      lVar8 = param_1[0x3e];
      local_90 = local_70;
      lStack_88 = lStack_68;
      uVar5 = Datpt_Cook_Order_CreamOnOrderConfig__GetListIngreType(&local_90);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5,uVar5);
      }
      FUN_05799ce8(lVar8,uVar5,DAT_091ac7e0);
      (**(code **)(*param_1 + 0x328))
                (param_1,(int)param_1[0x3c],1,*(undefined8 *)(*param_1 + 0x330));
      (**(code **)(*param_1 + 0x328))
                (param_1,*(undefined4 *)((long)param_1 + 0x1e4),1,*(undefined8 *)(*param_1 + 0x330))
      ;
      (**(code **)(*param_1 + 0x328))
                (param_1,uVar6 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0579a6a8(&local_f0,lVar3,DAT_091ac7f8);
      local_b0 = local_f0;
      local_f0 = 0;
      puStack_a8 = puStack_e8;
      local_a0 = local_e0;
      puStack_e8 = &local_b0;
      while (uVar6 = FUN_071aef5c(&local_b0,DAT_091a2b18), (uVar6 & 1) != 0) {
        (**(code **)(*param_1 + 0x328))
                  (param_1,local_a0 & 0xffffffff,1,*(undefined8 *)(*param_1 + 0x330));
      }
      FUN_071aef58(&local_b0,DAT_091a2b10);
    }
    FUN_0719ad50(&local_80,DAT_091a2840);
    if (param_1[0x39] != 0) {
      FUN_06f2d6f4(&local_f0,param_1[0x39],DAT_0919cab0);
      iVar7 = 0;
      puStack_c8 = puStack_e8;
      local_d0 = local_f0;
      lStack_b8 = lStack_d8;
      local_c0 = local_e0;
      local_f0 = 0;
      puStack_e8 = &local_d0;
      while( true ) {
        uVar6 = FUN_0726063c(&local_d0,DAT_091a5da0);
        if ((uVar6 & 1) == 0) {
          FUN_07260744(&local_d0,DAT_091a5d98);
          Datpt_Cook_Order_LevelControlCookOrder__AddItemNum(param_1,iVar7,0);
          return;
        }
        lVar3 = thunk_FUN_03f9944c(DAT_09192390);
        System_Object___ctor(lVar3,0);
        if (lVar3 == 0) break;
        *(ulong *)(lVar3 + 0x10) = local_c0;
        if ((int)local_c0 != 0) {
          lVar8 = param_1[0x2e];
          uVar5 = thunk_FUN_03f9944c(DAT_09178ac8);
          FUN_053150f0(uVar5,lVar3,DAT_091ecab0,0);
          FUN_04ae2af0(lVar8,uVar5,DAT_091c9b10);
          if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = *(int *)(lVar3 + 0x14);
          iVar2 = *(int *)(extraout_x1 + 0xa0);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar9 = (float)iVar1 / (float)iVar2;
          iVar1 = -0x80000000;
          if ((float)(int)fVar9 != INFINITY) {
            iVar1 = (int)fVar9;
          }
          iVar7 = iVar1 + iVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

