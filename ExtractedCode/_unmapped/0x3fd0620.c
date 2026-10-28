// rea decompile_all
// name: FUN_03fd0620
// address: 0x3fd0620
// body: available
// range: 0x3fd0620-0x3fd07c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd07c0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd0620(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_190 [40];
  
  if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
    FUN_03fcbfa4();
  }
  uVar1 = DAT_097488d0;
  iVar2 = DAT_097485e8;
  if (DAT_097488d4 == '\x01') {
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
      return;
    }
    return;
  }
  uVar4 = (ulong)DAT_097488d0;
  DAT_097488d4 = 1;
  if (DAT_097488d0 != 0) {
    memcpy(auStack_190,&DAT_09748790,uVar4 << 3);
    DAT_097488d0 = 0;
    memset(&DAT_09748790,0,uVar4 << 3);
  }
  if (DAT_097480e0 != 0) {
    DAT_097480e8 = 0;
  }
  if (DAT_097480f4 == 0) {
    if (uVar1 == 0) goto LAB_03fd0754;
LAB_03fd070c:
    FUN_03fcb048("Found %u leaked objects:\n",uVar1);
    puVar6 = auStack_190;
    do {
      uVar5 = *puVar6;
      (*(code *)PTR_FUN_09515618)(uVar5);
      FUN_03fd1308(uVar5);
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  else {
    (*DAT_097485b0)();
    if (uVar1 != 0) goto LAB_03fd070c;
    if (iVar2 == 0) goto LAB_03fd0754;
  }
  pcVar3 = getenv("GC_ABORT_ON_LEAK");
  if (pcVar3 != (char *)0x0) {
    (*(code *)PTR_FUN_09515620)("Leaked or smashed objects encountered");
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_03fd0754:
  if (DAT_097480e0 != 0) {
    iVar2 = FUN_0404be40(1,&DAT_097480e8);
    if (iVar2 != 0) {
      FUN_03fcbfa4();
    }
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
  }
  DAT_097488d4 = 0;
  return;
}

