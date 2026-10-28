// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineQuery$$GetActiveOpenOrderSpecs
// address: 0x4208f60
// body: available
// range: 0x4208f60-0x420925b inclusive
// range: 0x4209298-0x42092d7 inclusive
// range: 0x42092e8-0x420930f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4209258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42092e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42092ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42092f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42092f8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42092fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4209300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4209304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420930c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04209254) */

long AnhPD_FoodOrder_CustomerLineQuery__GetActiveOpenOrderSpecs(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulong local_1d8;
  undefined8 local_1a0;
  undefined8 *puStack_198;
  long local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined1 auStack_f0 [72];
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  
  if ((DAT_09516c22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c22 = 1;
  }
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(lVar3,DAT_091aed10);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a8,*(long *)(param_1 + 0x10),DAT_091acac8);
  local_100 = local_98;
  local_188 = &local_110;
  uStack_108 = uStack_a0;
  local_110 = local_a8;
  local_190 = 0;
  do {
    do {
      do {
        uVar4 = FUN_071bd28c(&local_110,DAT_091a2c68);
        lVar2 = local_100;
        lVar5 = local_190;
        if ((uVar4 & 1) == 0) {
          FUN_071bd288(local_188,DAT_091a2c60);
          if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c548(lVar5);
          }
          return lVar3;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
      } while ((uVar4 & 1) == 0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(int *)(*(long *)(lVar2 + 0x38) + 0x10) == 0);
    if ((param_2 & 1) == 0) {
      if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = AnhPD_FoodOrder_CustomerLineController__GetOpenOrderIndices();
    }
    else {
      if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = AnhPD_FoodOrder_CustomerLineController__GetServableOrderIndices();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05797d74(&local_1e8,lVar5,DAT_091adcc0);
    local_1a0 = 0;
    uStack_128 = uStack_1e0;
    local_130 = local_1e8;
    local_120 = local_1d8;
    puStack_198 = &local_130;
LAB_04209160:
    uVar4 = FUN_071ad7a4(&local_130,DAT_091a34d8);
    if ((uVar4 & 1) != 0) {
      AnhPD_FoodOrder_FCustomerLine__GetOrderSpec(&local_1e8,lVar2,local_120 & 0xffffffff);
      memcpy(&local_180,&local_1e8,0x48);
      uVar4 = AnhPD_FoodOrder_OrderSpec__get_IsValid(&local_180,0);
      if ((uVar4 & 1) != 0) {
        if (lVar3 != 0) {
          memcpy(auStack_f0,&local_180,0x48);
          lVar5 = DAT_091aed20;
          lVar6 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar1 * 0x48;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar6 + 0x20),auStack_f0,0x48);
              thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_a8,auStack_f0,0x48);
              FUN_057ef254(lVar3,&local_a8,uVar7);
            }
            goto LAB_04209160;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_04209160;
    }
    FUN_071ad7a0(&local_130,DAT_091a34d0);
  } while( true );
}

