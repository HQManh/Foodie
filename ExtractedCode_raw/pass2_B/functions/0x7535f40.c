// rea decompile_all
// name: System.Globalization.CultureData$$GetNFIValues
// address: 0x7535f40
// body: available
// range: 0x7535f40-0x7536193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7536190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureData__GetNFIValues(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x58),0);
  if ((uVar1 & 1) == 0) {
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_70 = 0;
    uStack_6c = 0;
    local_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_34 = 0;
    local_40 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uVar2 = FUN_03f62828(*(undefined4 *)(param_1 + 0x68),&local_80);
    uVar3 = System_Globalization_CultureData__create_group_sizes_array
                      (uVar2,uStack_78._4_4_,local_70);
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0x18) = uVar3;
      uVar3 = thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__create_group_sizes_array
                        (uVar3,uStack_48 & 0xffffffff,uStack_48._4_4_);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_60 & 0xffffffff);
      System_Globalization_NumberFormatInfo__set_NaNSymbol(param_2,uVar3);
      *(undefined4 *)(param_2 + 0xb0) = (undefined4)local_80;
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_80._4_4_);
      *(undefined8 *)(param_2 + 0x50) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,uStack_78 & 0xffffffff);
      *(undefined8 *)(param_2 + 0x48) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = NEON_rev64(CONCAT44(uStack_68,uStack_6c),4);
      *(undefined8 *)(param_2 + 0xb4) = uVar3;
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,uStack_64);
      *(undefined8 *)(param_2 + 0x58) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_60._4_4_);
      *(undefined8 *)(param_2 + 0x78) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_58 & 0xffffffff);
      *(undefined8 *)(param_2 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8();
      *(undefined4 *)(param_2 + 0xac) = local_58._4_4_;
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_50 & 0xffffffff);
      *(undefined8 *)(param_2 + 0x38) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_50._4_4_);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      thunk_FUN_03f5d7b8();
      *(undefined4 *)(param_2 + 0xbc) = (undefined4)local_40;
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,local_40._4_4_);
      *(undefined8 *)(param_2 + 0x98) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = NEON_rev64(CONCAT44(uStack_34,local_38),4);
      *(undefined8 *)(param_2 + 0xc0) = uVar3;
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,uStack_30);
      *(undefined8 *)(param_2 + 0x90) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = System_Globalization_CultureData__idx2string(uVar2,uStack_2c & 0xffffffff);
      *(undefined8 *)(param_2 + 0x70) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar2 = System_Globalization_CultureData__idx2string(uVar2,uStack_2c._4_4_);
      *(undefined8 *)(param_2 + 0x28) = uVar2;
      thunk_FUN_03f5d7b8();
      goto LAB_07536148;
    }
  }
  else if (param_2 != 0) {
LAB_07536148:
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0xac);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x38);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x40);
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x88));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

