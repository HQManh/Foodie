// rea decompile_all
// name: FUN_03fa9410
// address: 0x3fa9410
// body: available
// range: 0x3fa9410-0x3fa956f inclusive
// range: 0x3fa9590-0x3fa959f inclusive
// range: 0x3fa95b0-0x3fa95cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa95c8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fa9410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_a8 [2];
  ulong local_a0;
  void *pvStack_98;
  void *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  void *local_50;
  undefined4 local_48;
  byte local_40;
  undefined7 uStack_3f;
  ulong uStack_38;
  void *local_30;
  undefined4 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_03f896e8(&local_50,param_2,(long)&local_18 + 4);
  local_80 = local_48;
  if ((local_40 & 1) == 0) {
    local_78 = CONCAT71(uStack_3f,local_40);
    uStack_70 = uStack_38;
    local_68 = local_30;
  }
  else {
    FUN_03f5d0a4(&local_78,local_30,uStack_38);
  }
  local_60 = local_28;
  iVar1 = FUN_03f917a8(&local_80);
  if (iVar1 == 0) {
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    FUN_03f896e8(&local_80,param_3,&local_18);
    local_a8[0] = (undefined4)local_78;
    if ((uStack_70 & 1) == 0) {
      local_90 = (void *)CONCAT44(uStack_5c,local_60);
      pvStack_98 = local_68;
      local_a0 = uStack_70;
    }
    else {
      FUN_03f5d0a4(&local_a0,CONCAT44(uStack_5c,local_60),local_68);
    }
    local_88 = local_58;
    iVar1 = FUN_03f917a8(local_a8);
    if (iVar1 == 0) {
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_18._4_4_ == (uint)local_18) {
        uVar2 = memcmp(local_50,(void *)CONCAT44(uStack_7c,local_80),(ulong)local_18._4_4_ << 1);
        uVar2 = uVar2 >> 0x1f;
      }
      else {
        uVar2 = (uint)(local_18._4_4_ < (uint)local_18);
      }
      if ((uStack_70 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_5c,local_60));
      }
      if ((local_40 & 1) != 0) {
        operator_delete(local_30);
      }
      return uVar2;
    }
  }
  else {
    FUN_03fa5d60(&local_80);
  }
  uVar3 = FUN_03fa5d60(local_a8);
  if ((uStack_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar3);
}

