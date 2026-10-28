// rea decompile_all
// name: FUN_03f8fdf0
// address: 0x3f8fdf0
// body: available
// range: 0x3f8fdf0-0x3f8ffb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8ffb0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8fdf0(undefined8 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_98 = 0x1032547698badcfe;
  local_a0 = 0xefcdab8967452301;
  uStack_88 = uStack_88 & 0xffffffff00000000;
  local_90 = 0xc3d2e1f0;
  FUN_03f8ffb4(&local_a0,param_1,param_2);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar3 ^ 0xffffffff;
    uVar3 = uVar3 + 8;
    *(char *)((long)&local_40 + uVar4) =
         (char)(*(uint *)(((ulong)&local_a0 | (ulong)(uVar4 < 4) << 2) + 0x14) >>
               (ulong)(uVar1 & 0x18));
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  FUN_03f8ffb4(&local_a0,&DAT_01a5a05e,1);
  while ((local_90._4_4_ & 0x1f8) != 0x1c0) {
    FUN_03f8ffb4(&local_a0,&DAT_023abc98,1);
  }
  FUN_03f8ffb4(&local_a0,&local_40,8);
  uVar7 = 1;
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar5 = uVar4 >> 2 & 0x3fffffff;
    if (uVar6 < 0x14) {
      *(char *)(param_3 + uVar4) =
           (char)(*(uint *)((long)&local_a0 + uVar5 * 4) >> (ulong)(uVar3 & 0x10 ^ 0x18));
    }
    if (uVar7 < 0x14) {
      *(char *)(param_3 + uVar4 + 1) =
           (char)(*(uint *)((long)&local_a0 + uVar5 * 4) >> (ulong)((uVar3 ^ 0xffffffff) & 0x10));
    }
    uVar6 = uVar6 + 2;
    uVar7 = uVar7 + 2;
    uVar4 = uVar4 + 2;
    uVar3 = uVar3 + 0x10;
  } while (uVar4 != 0x14);
  local_40 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  FUN_03f90090(&local_a0,(long)&uStack_88 + 4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

