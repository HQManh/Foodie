// rea decompile_all
// name: System.Number$$FormatUInt32
// address: 0x75b1240
// body: available
// range: 0x75b1240-0x75b14fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b1390 to 0x75bc0f4 System.Number$$Int32ToHexStr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b13fc to 0x75bbda4 System.Number$$UInt32ToDecStr (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b14f8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatUInt32
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09521d3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba950);
    DAT_09521d3f = 1;
  }
  local_f4 = 0;
  uStack_7e = 0;
  uStack_80 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_86 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if ((int)param_3 == 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      iVar4 = -1;
LAB_075b13e0:
      System_Number__UInt32ToDecStr(param_1,iVar4);
      return;
    }
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Number__ParseFormatSpecifier(param_2,param_3,&local_f4);
    uVar3 = System_Globalization_NumberFormatInfo__GetInstance(param_4,0);
    iVar4 = local_f4;
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && local_f4 < 1)) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) == local_68) goto LAB_075b13e0;
    }
    else if ((uVar2 & 0xffdf) == 0x58) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        System_Number__Int32ToHexStr(param_1,uVar2 - 0x21,iVar4);
        return;
      }
    }
    else {
      uStack_7e = 0;
      uStack_80 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_86 = 0;
      uStack_90 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_075c4b8c(param_1,&local_f0,0);
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      System_Text_ValueStringBuilder___ctor(&local_120,&local_160,0x20,0);
      if ((uVar2 & 0xffff) == 0) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__NumberToStringFormat(&local_120,&local_f0,param_2,param_3,uVar3);
      }
      else {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__NumberToString(&local_120,&local_f0,uVar2,iVar4,uVar3,0);
      }
      System_Text_ValueStringBuilder__ToString(&local_120,0);
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

