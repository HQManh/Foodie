// rea decompile_all
// name: FUN_03f8a590
// address: 0x3f8a590
// body: available
// range: 0x3f8a590-0x3f8a6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8a6a4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8a590(char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (param_1 == (char *)0x0) goto LAB_03f8a680;
  if (*param_1 == '\0') goto LAB_03f8a61c;
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = inet_pton(2,param_1,(void *)((ulong)&local_58 | 4));
  if (iVar2 < 1) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = 0;
    local_48 = 0;
    uVar3 = inet_pton(10,param_1,&uStack_50);
    uVar4 = uVar3;
    if (0 < (int)uVar3) {
      local_58 = CONCAT62(local_58._2_6_,10);
      uVar4 = FUN_03f8a4d0(&local_58,0x1c);
    }
    uVar4 = 0 < (int)uVar3 & uVar4;
    goto LAB_03f8a680;
  }
  uVar4 = local_58._4_4_;
  local_58 = CONCAT62(local_58._2_6_,2);
  if ((uVar4 == 0xffffffff) || (uVar3 = uVar4 & 0xff, uVar3 == 10)) {
LAB_03f8a67c:
    uVar4 = 1;
  }
  else {
    if (uVar3 == 0xc0) {
      if ((uVar4 >> 8 & 0xff) == 0xa8) goto LAB_03f8a67c;
    }
    else if ((uVar3 == 0xac) && ((uVar4 >> 8 & 0xf0) == 0x10)) goto LAB_03f8a67c;
LAB_03f8a61c:
    uVar4 = 0;
  }
LAB_03f8a680:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

