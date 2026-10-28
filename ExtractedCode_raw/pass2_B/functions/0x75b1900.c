// rea decompile_all
// name: System.Number$$TryFormatInt32
// address: 0x75b1900
// body: available
// range: 0x75b1900-0x75b1c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b1aa8 to 0x75bc5fc System.Number$$TryInt32ToHexStr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b1b00 to 0x75bc240 System.Number$$TryUInt32ToDecStr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b1bf8 to 0x75bc418 System.Number$$TryNegativeInt32ToDecStr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b1c74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75b1c78 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Number__TryFormatInt32
                (int param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined6 local_96;
  undefined2 uStack_90;
  undefined8 uStack_8e;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_138 = param_6;
  if ((DAT_09521d3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba950);
    DAT_09521d3e = 1;
  }
  local_104 = 0;
  uStack_8e = 0;
  uStack_90 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_96 = 0;
  uStack_a0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  if ((param_1 < 0) || ((param_3 & 0xffffffff) != 0)) {
    local_140 = param_7;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Number__ParseFormatSpecifier(param_2,param_3,&local_104);
    lVar3 = System_Globalization_NumberFormatInfo__GetInstance(param_4,0);
    iVar5 = local_104;
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && local_104 < 1)) {
      if (param_1 < 0) {
        if (lVar3 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        else {
          uVar6 = *(undefined8 *)(lVar3 + 0x30);
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(lVar1 + 0x28) == local_78) {
            uVar4 = System_Number__TryNegativeInt32ToDecStr
                              (param_1,iVar5,uVar6,param_5,local_138,local_140);
            return uVar4;
          }
        }
      }
      else {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_7 = local_140;
        if (*(long *)(lVar1 + 0x28) == local_78) goto LAB_075b1ae4;
      }
    }
    else if ((uVar2 & 0xffdf) == 0x58) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) == local_78) {
        uVar4 = System_Number__TryInt32ToHexStr
                          (param_1,uVar2 - 0x21,iVar5,param_5,local_138,local_140);
        return uVar4;
      }
    }
    else {
      uStack_8e = 0;
      uStack_90 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_96 = 0;
      uStack_a0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_075c4a64(param_1,&local_100,0);
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      System_Text_ValueStringBuilder___ctor(&local_130,&local_180,0x20,0);
      if ((uVar2 & 0xffff) == 0) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__NumberToStringFormat(&local_130,&local_100,param_2,param_3,lVar3);
      }
      else {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__NumberToString(&local_130,&local_100,uVar2,iVar5,lVar3,0);
      }
      uVar2 = System_Text_ValueStringBuilder__TryCopyTo(&local_130,param_5,local_138,local_140,0);
      if (*(long *)(lVar1 + 0x28) == local_78) {
        return (ulong)(uVar2 & 1);
      }
    }
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(lVar1 + 0x28) == local_78) {
      iVar5 = -1;
LAB_075b1ae4:
      uVar4 = System_Number__TryUInt32ToDecStr(param_1,iVar5,param_5,local_138,param_7);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

