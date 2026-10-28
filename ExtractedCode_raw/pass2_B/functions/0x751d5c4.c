// rea decompile_all
// name: System.Boolean$$TryParse
// address: 0x751d5c4
// body: available
// range: 0x751d5c4-0x751d8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Boolean__TryParse(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_09521770 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09202830);
    FUN_03f5c2a4(&DAT_09210e10);
    DAT_09521770 = 1;
  }
  uVar7 = DAT_09210e10;
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (uVar7 == 0) goto LAB_0751d65c;
LAB_0751d62c:
    uVar3 = System_String__GetRawStringData(uVar7,0);
    uVar7 = (ulong)*(uint *)(uVar7 + 0x10);
  }
  else {
    if (DAT_09210e10 != 0) goto LAB_0751d62c;
LAB_0751d65c:
    uVar3 = 0;
  }
  if (DAT_09521834 == '\0') {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521834 = '\x01';
  }
  iVar2 = (int)param_2;
  iVar6 = (int)uVar7;
  if (iVar6 == iVar2) {
    if (iVar6 != 0) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                        (uVar3,uVar7,param_1,param_2,0);
      if (iVar1 != 0) goto LAB_0751d6cc;
    }
    goto LAB_0751d888;
  }
LAB_0751d6cc:
  uVar8 = DAT_09202830;
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (uVar8 == 0) goto LAB_0751d714;
LAB_0751d6e4:
    uVar4 = System_String__GetRawStringData(uVar8,0);
    uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
  }
  else {
    if (DAT_09202830 != 0) goto LAB_0751d6e4;
LAB_0751d714:
    uVar4 = 0;
  }
  if (DAT_09521834 == '\0') {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521834 = '\x01';
  }
  iVar1 = (int)uVar8;
  if (iVar1 == iVar2) {
    if (iVar2 != 0) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                        (uVar4,uVar8,param_1,param_2,0);
      if (iVar2 != 0) goto LAB_0751d780;
    }
    goto LAB_0751d890;
  }
LAB_0751d780:
  if (*(int *)(DAT_09535400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar9 = System_Boolean__TrimWhiteSpaceAndNull(param_1,param_2);
  if (DAT_09521834 == '\0') {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521834 = '\x01';
  }
  if (iVar6 == auVar9._8_4_) {
    if (iVar6 != 0) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                        (uVar3,uVar7,auVar9._0_8_,auVar9._8_8_,0);
      if (iVar2 != 0) {
        if (DAT_09521834 == '\0') {
          FUN_03f5c2a4(&DAT_091827f8);
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_09521834 = '\x01';
        }
        goto LAB_0751d83c;
      }
    }
LAB_0751d888:
    uVar5 = 1;
  }
  else {
LAB_0751d83c:
    if (iVar1 != auVar9._8_4_) {
LAB_0751d87c:
      uVar5 = 0;
      uVar3 = 0;
      goto LAB_0751d898;
    }
    if (iVar1 != 0) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                        (uVar4,uVar8,auVar9._0_8_,auVar9._8_8_,0);
      if (iVar2 != 0) goto LAB_0751d87c;
    }
LAB_0751d890:
    uVar5 = 0;
  }
  uVar3 = 1;
LAB_0751d898:
  *param_3 = uVar5;
  return uVar3;
}

