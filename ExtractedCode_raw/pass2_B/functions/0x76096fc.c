// rea decompile_all
// name: System.TermInfoDriver$$CreateKeyInfoFromInt
// address: 0x76096fc
// body: available
// range: 0x76096fc-0x7609883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_TermInfoDriver__CreateKeyInfoFromInt(undefined8 param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0x14) {
    if (uVar1 < 0x14) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x3300U) != 0) goto LAB_07609750;
      if (uVar1 == 10) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0xd;
        goto LAB_0760975c;
      }
      if (uVar1 == 0x13) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x13;
        goto LAB_0760975c;
      }
    }
LAB_076097dc:
    if (0xffffffe5 < uVar1 - 0x1b) {
      uVar2 = 0;
      uVar4 = (ulong)(uVar1 | 0x40);
      uVar3 = 1;
      goto LAB_0760975c;
    }
    if (0xffffffe5 < uVar1 - 0x7b) {
      uVar3 = 0;
      uVar2 = 0;
      uVar4 = (ulong)(uVar1 - 0x20);
      goto LAB_0760975c;
    }
    if (uVar1 - 0x5b < 0xffffffe6) {
      uVar3 = 0;
      uVar2 = 0;
      if (9 < uVar1 - 0x30) {
        uVar1 = 0;
      }
      uVar4 = (ulong)uVar1;
      goto LAB_0760975c;
    }
    uVar2 = 1;
  }
  else {
    if (0x2a < (int)uVar1) {
      if (uVar1 == 0x2b) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x6b;
        goto LAB_0760975c;
      }
      if (uVar1 == 0x2f) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x6f;
        goto LAB_0760975c;
      }
      if (uVar1 == 0x2d) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x6d;
        goto LAB_0760975c;
      }
      goto LAB_076097dc;
    }
    if (uVar1 != 0x1b) {
      if (uVar1 == 0x20) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x20;
        goto LAB_0760975c;
      }
      if (uVar1 == 0x2a) {
        uVar3 = 0;
        uVar2 = 0;
        uVar4 = 0x6a;
        goto LAB_0760975c;
      }
      goto LAB_076097dc;
    }
LAB_07609750:
    uVar2 = 0;
  }
  uVar3 = 0;
  uVar4 = param_2 & 0xffffffff;
LAB_0760975c:
  local_18 = 0;
  local_20 = 0;
  System_ConsoleKeyInfo___ctor(&local_20,param_2,uVar4,uVar2,param_3 & 1,uVar3,0);
  auVar5._8_4_ = local_18;
  auVar5._0_8_ = local_20;
  auVar5._12_4_ = 0;
  return auVar5;
}

