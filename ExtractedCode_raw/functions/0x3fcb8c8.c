// rea decompile_all
// name: FUN_03fcb8c8
// address: 0x3fcb8c8
// body: available
// range: 0x3fcb8c8-0x3fcba23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcba20 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03fcb8c8(uint param_1,undefined *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_03fcb894;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  FUN_03fcba24();
  if ((DAT_097480e0 != 0) && (iVar3 = FUN_0404be40(1,&DAT_097480e8), iVar3 != 0)) {
    FUN_03fcbfa4();
  }
  if (_DAT_097480c8 == 0) {
    _DAT_097480c8 = 1;
    pcVar4 = getenv("GC_IGNORE_GCJ_INFO");
    if ((pcVar4 != (char *)0x0) && (DAT_09535be0 != 0)) {
      FUN_03fcb51c("Gcj-style type information is disabled!\n");
    }
    uVar2 = DAT_09515638;
    *(undefined **)(&DAT_09535c98 + (long)(int)param_1 * 8) = puVar1;
    if (uVar2 <= param_1) {
      (*(code *)PTR_FUN_09515620)("GC_init_gcj_malloc: bad index");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    DAT_097480d8 = FUN_03fcc0e4();
    if (pcVar4 == (char *)0x0) {
      DAT_097480cc = FUN_03fcc120(DAT_097480d8,0xffffffffffffffeb,0,1);
      uVar5 = FUN_03fcc0e4();
      uRam00000000097480d0 = FUN_03fcc120(uVar5,(long)(int)(param_1 << 2 | 0x102),0,1);
    }
    else {
      uRam00000000097480d0 = FUN_03fcc120(DAT_097480d8,0,1,1);
      DAT_097480cc = uRam00000000097480d0;
    }
  }
  if (DAT_097480e0 != 0) {
    DAT_097480e8 = 0;
  }
  return;
}

