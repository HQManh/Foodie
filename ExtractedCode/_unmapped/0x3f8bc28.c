// rea decompile_all
// name: FUN_03f8bc28
// address: 0x3f8bc28
// body: available
// range: 0x3f8bc28-0x3f8bd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8bd34 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8bc28(long param_1,uint param_2,uint param_3,undefined8 param_4,int param_5,uint param_6
                 ,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int local_3c;
  undefined2 local_38;
  ushort uStack_36;
  uint uStack_34;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_3c = 0x10;
  uStack_30 = 0;
  uVar4 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_7 = 0;
  _local_38 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,
                       CONCAT22((ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8),
                                2));
  if (param_6 == 0) {
    uVar4 = 0;
LAB_03f8bcb4:
    uVar2 = FUN_03f8b864(param_1,param_4,(long)param_5,uVar4,param_7,&local_38,&local_3c);
    if ((int)uVar2 != 0) {
      *param_8 = 0xffffffff;
      goto LAB_03f8bd00;
    }
    if ((local_3c == 0) || (uVar3 = FUN_03f8b454(&local_38,local_3c,param_8), (uVar3 & 1) != 0)) {
      uVar2 = 0;
      goto LAB_03f8bd00;
    }
    *param_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0x273f;
  }
  else {
    if ((param_6 & 0xffff7fe8) == 0) {
      uVar4 = param_6 & 7;
      if (0x7fff < param_6) {
        uVar4 = param_6 & 7 | 0x8000;
      }
      goto LAB_03f8bcb4;
    }
    *(undefined4 *)(param_1 + 0x14) = 0x273d;
  }
  uVar2 = 0xfffffffd;
LAB_03f8bd00:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

