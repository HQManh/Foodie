// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$CountInboundFor
// address: 0x41ef674
// body: available
// range: 0x41ef674-0x41ef8ef inclusive
// range: 0x41ef8f4-0x41ef8f7 inclusive
// range: 0x41ef934-0x41ef98f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ef8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef8f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef97c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef98c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041ef8e8) */
/* WARNING: Removing unreachable block (ram,0x041ef978) */

int AnhPD_FoodOrder_LevelInfo__CountInboundFor(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_128;
  undefined8 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516b5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c8b8);
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_091a5d38);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a5d40);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a5d48);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a93a8);
    FUN_03f5c2a4(&DAT_091a9810);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b5f = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_c0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  local_fc = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_06fd8888(&local_128,*(long *)(param_1 + 0x30),DAT_0919c8b8);
    iVar6 = 0;
    local_70 = local_108;
    puStack_88 = puStack_120;
    local_90 = local_128;
    uStack_78 = uStack_110;
    local_80 = local_118;
    while( true ) {
      do {
        uVar4 = FUN_072753d4(&local_90,DAT_091a5d40);
        if ((uVar4 & 1) == 0) {
          FUN_072754f4(&local_90,DAT_091a5d38);
          return iVar6;
        }
        uStack_98 = uStack_78;
        local_a0 = local_80;
        FUN_05614b1c(&local_a0,&lStack_a8,&local_b0,DAT_091a93a8);
        lVar3 = lStack_a8;
        lVar2 = local_b0;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
      } while ((uVar4 & 1) == 0);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fca844(&local_128,*(long *)(lVar2 + 0x18),DAT_0919f9b0);
      local_c0 = local_108;
      puStack_d8 = puStack_120;
      local_e0 = local_128;
      uStack_c8 = uStack_110;
      local_d0 = local_118;
      local_128 = 0;
      puStack_120 = &local_e0;
      while (uVar4 = FUN_07272f90(&local_e0,DAT_091a6758), (uVar4 & 1) != 0) {
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        FUN_05614644(&local_f0,&local_f8,&local_fc,DAT_091a9810);
        iVar1 = local_fc;
        if (*(int *)(lVar2 + 0x10) == -1) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = AnhPD_FoodOrder_CookingStation__ResultIdIfFed(lVar3,local_f8,0);
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = AnhPD_FoodOrder_CookingStation__ResultIdOfGroup(lVar3,*(int *)(lVar2 + 0x10),0);
        }
        uVar4 = System_String__op_Equality(uVar5,param_2,0);
        if ((uVar4 & 1) == 0) {
          iVar1 = 0;
        }
        iVar6 = iVar1 + iVar6;
      }
      FUN_072730b4(&local_e0,DAT_091a6750);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

