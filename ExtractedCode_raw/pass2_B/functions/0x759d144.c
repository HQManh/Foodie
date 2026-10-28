// rea decompile_all
// name: System.Double$$TryParse
// address: 0x759d144
// body: available
// range: 0x759d144-0x759d3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759d3fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Double__TryParse
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 *param_5
          )

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09521c05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521c05 = 1;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Number__TryParseDouble(param_1,param_2,param_3,param_4,param_5,0);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  auVar6 = System_MemoryExtensions__Trim(param_1,param_2,0);
  uVar3 = auVar6._8_8_;
  uVar4 = auVar6._0_8_;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(ulong *)(param_4 + 0x70);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (uVar1 == 0) goto LAB_0759d224;
LAB_0759d1f4:
    uVar2 = System_String__GetRawStringData(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_0759d1f4;
LAB_0759d224:
    uVar2 = 0;
  }
  if (DAT_095218ea == '\0') {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_095218ea = '\x01';
  }
  iVar5 = auVar6._8_4_;
  if ((iVar5 == (int)uVar1) &&
     ((iVar5 == 0 || (uVar1 = FUN_074367c0(uVar4,uVar3,uVar2,uVar1,DAT_091d2f78), (uVar1 & 1) != 0))
     )) {
    uVar4 = 0x7ff0000000000000;
    goto LAB_0759d3d0;
  }
  uVar1 = *(ulong *)(param_4 + 0x78);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (uVar1 == 0) goto LAB_0759d2cc;
LAB_0759d29c:
    uVar2 = System_String__GetRawStringData(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_0759d29c;
LAB_0759d2cc:
    uVar2 = 0;
  }
  if (DAT_095218ea == '\0') {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_095218ea = '\x01';
  }
  if ((iVar5 == (int)uVar1) &&
     ((iVar5 == 0 || (uVar1 = FUN_074367c0(uVar4,uVar3,uVar2,uVar1,DAT_091d2f78), (uVar1 & 1) != 0))
     )) {
    uVar4 = 0xfff0000000000000;
    goto LAB_0759d3d0;
  }
  uVar1 = *(ulong *)(param_4 + 0x68);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (uVar1 == 0) goto LAB_0759d370;
LAB_0759d340:
    uVar2 = System_String__GetRawStringData(uVar1,0);
    uVar1 = (ulong)*(uint *)(uVar1 + 0x10);
  }
  else {
    if (uVar1 != 0) goto LAB_0759d340;
LAB_0759d370:
    uVar2 = 0;
  }
  if (DAT_095218ea == '\0') {
    FUN_03f5c2a4(&DAT_091d2f78);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_095218ea = '\x01';
  }
  if ((iVar5 != (int)uVar1) ||
     ((iVar5 != 0 && (uVar1 = FUN_074367c0(uVar4,uVar3,uVar2,uVar1,DAT_091d2f78), (uVar1 & 1) == 0))
     )) {
    return 0;
  }
  uVar4 = 0x7ff8000000000000;
LAB_0759d3d0:
  *param_5 = uVar4;
  return 1;
}

