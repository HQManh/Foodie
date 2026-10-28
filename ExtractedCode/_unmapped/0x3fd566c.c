// rea decompile_all
// name: FUN_03fd566c
// address: 0x3fd566c
// body: available
// range: 0x3fd566c-0x3fd57df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd57c4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd57dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd566c(void)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  DAT_09748a08 = FUN_03fcc0e4();
  DAT_097488d8 = FUN_03fcc120(DAT_09748a08,0xfffffffffffffffb,1,1);
  uVar2 = DAT_09515638;
  uVar5 = (ulong)DAT_09515638;
  if (0x3f < DAT_09515638) {
    (*(code *)PTR_FUN_09515620)("Too many mark procedures");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = uVar5 + 1;
  bVar3 = DAT_09515638 != 0x3f;
  iVar6 = (int)lVar1;
  DAT_09515638 = iVar6;
  *(undefined1 **)(&DAT_09535c98 + uVar5 * 8) = &LAB_03fd57e0;
  DAT_097488f8 = uVar2;
  if (bVar3) {
    DAT_09515638 = uVar2 + 2;
    *(code **)(&DAT_09535c98 + lVar1 * 8) = FUN_03fd5b38;
    DAT_097488fc = iVar6;
    uVar4 = FUN_03fcc0e4();
    DAT_097488dc = FUN_03fcc120(uVar4,(long)(int)(DAT_097488fc << 2 | 2),0,1);
    uVar5 = 0;
    DAT_09748908 = 1;
    uVar7 = 0x3f;
    do {
      if (uVar5 < 0x1f) {
        (&DAT_09748910)[uVar5] = -1L << (uVar7 & 0x3f) | 1;
      }
      if ((uVar5 | 1) < 0x1f) {
        (&DAT_09748918)[uVar5] = -1L << (uVar7 - 1 & 0x3f) | 1;
      }
      uVar5 = uVar5 + 2;
      uVar7 = uVar7 - 2;
    } while (uVar5 != 0x20);
    return;
  }
  (*(code *)PTR_FUN_09515620)("Too many mark procedures");
                    /* WARNING: Subroutine does not return */
  abort();
}

