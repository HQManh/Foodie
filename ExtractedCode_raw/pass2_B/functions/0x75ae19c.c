// rea decompile_all
// name: System.Guid$$TryParseGuidWithDashes
// address: 0x75ae19c
// body: available
// range: 0x75ae19c-0x75ae427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ae424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Guid__TryParseGuidWithDashes(short *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_09521c9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091fff00);
    FUN_03f5c2a4(&DAT_09203a20);
    DAT_09521c9f = 1;
  }
  local_28 = 0;
  local_38 = 0;
  iVar5 = (int)param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*param_1 == 0x28) {
    if ((iVar5 == 0x26) && (param_1[0x25] == 0x29)) {
LAB_075ae23c:
      lVar3 = 1;
LAB_075ae250:
      uVar2 = (uint)lVar3;
      if ((((param_1[uVar2 | 8] != 0x2d) || (param_1[lVar3 + 0xd] != 0x2d)) ||
          (param_1[uVar2 | 0x12] != 0x2d)) || (param_1[lVar3 + 0x17] != 0x2d)) {
        puVar4 = &DAT_091fff00;
        goto LAB_075ae3f0;
      }
      local_28._4_4_ = 0;
      local_28._0_4_ = uVar2;
      uVar1 = System_Guid__StringToInt
                        (param_1,param_2,&local_28,8,0x2000,(long)&local_28 + 4,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *param_3 = local_28._4_4_;
      local_28._0_4_ = (uint)local_28 + 1;
      uVar1 = System_Guid__StringToInt
                        (param_1,param_2,&local_28,4,0x2000,(long)&local_28 + 4,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *(short *)(param_3 + 1) = (short)local_28._4_4_;
      local_28._0_4_ = (uint)local_28 + 1;
      uVar1 = System_Guid__StringToInt
                        (param_1,param_2,&local_28,4,0x2000,(long)&local_28 + 4,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *(short *)((long)param_3 + 6) = (short)local_28._4_4_;
      local_28._0_4_ = (uint)local_28 + 1;
      uVar1 = System_Guid__StringToInt
                        (param_1,param_2,&local_28,4,0x2000,(long)&local_28 + 4,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      iVar5 = (uint)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,iVar5);
      uVar1 = System_Guid__StringToLong(param_1,param_2,&local_28,0x2000,&local_38,param_3);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if ((uint)local_28 - iVar5 == 0xc) {
        *(char *)((long)param_3 + 0xf) = (char)local_38;
        *(char *)((long)param_3 + 10) = (char)((ulong)local_38 >> 0x28);
        *(char *)((long)param_3 + 0xb) = (char)((ulong)local_38 >> 0x20);
        *(char *)(param_3 + 3) = (char)((ulong)local_38 >> 0x18);
        *(char *)((long)param_3 + 0xd) = (char)((ulong)local_38 >> 0x10);
        *(ushort *)(param_3 + 2) = local_28._4_2_ >> 8 | local_28._4_2_ << 8;
        *(char *)((long)param_3 + 0xe) = (char)((ulong)local_38 >> 8);
        return 1;
      }
    }
  }
  else if (*param_1 == 0x7b) {
    if ((iVar5 == 0x26) && (param_1[0x25] == 0x7d)) goto LAB_075ae23c;
  }
  else if (iVar5 == 0x24) {
    lVar3 = 0;
    goto LAB_075ae250;
  }
  puVar4 = &DAT_09203a20;
LAB_075ae3f0:
  System_Guid_GuidResult__SetFailure(param_3,2,*puVar4,0,0,0);
  return 0;
}

