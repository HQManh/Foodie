// rea decompile_all
// name: FUN_03fcf594
// address: 0x3fcf594
// body: available
// range: 0x3fcf594-0x3fcf85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcf858 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fcf594(undefined8 param_1)

{
  long lVar1;
  
  if (DAT_09748728 < 3) {
    if (DAT_09748728 == 0) {
      return 0;
    }
    if (DAT_09748728 == 1) {
      if (DAT_09535c68 - 0x8000U <= DAT_09535c70) {
        DAT_09748758 = 1;
        DAT_09535c70 = FUN_03fd2684(DAT_09535c70,DAT_09535c60,DAT_09535c60 + DAT_09748708 * 0x10);
        return 0;
      }
      DAT_09748760 = FUN_03fd3904(DAT_09748760);
      if (DAT_09748760 == 0) {
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Marked from %lu dirty pages\n",DAT_09748750);
        }
        FUN_03fd3a5c(0,param_1);
        if (DAT_09748728 != 5) {
          DAT_09748728 = 3;
          DAT_0974875c = 1;
          return 0;
        }
        DAT_0974875c = 1;
        return 0;
      }
      return 0;
    }
    if (DAT_09748728 != 2) {
LAB_03fcf844:
      (*(code *)PTR_FUN_09515620)("GC_mark_some: bad state");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (DAT_09535c60 + (DAT_09748708 >> 2) * 0x10 <= DAT_09535c70) goto LAB_03fcf700;
    DAT_09748760 = FUN_03fd3b48(DAT_09748760);
    if (DAT_09748760 != 0) {
      return 0;
    }
    FUN_03fd3a5c(1,param_1);
LAB_03fcf7fc:
    if (DAT_09748728 != 5) {
      DAT_09748728 = 3;
      DAT_0974875c = 1;
      return 0;
    }
    DAT_0974875c = 1;
    return 0;
  }
  if (DAT_09748728 - 4U < 2) {
    if (DAT_0974875c == 0) {
      DAT_09748728 = 2;
      return 0;
    }
    if (DAT_09535c70 < DAT_09535c60) {
      lVar1 = DAT_09748760;
      if ((DAT_09748728 == 5) && (DAT_09748760 == 0)) {
        if (DAT_09748758 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_03fd3c78(DAT_09748708 << 1);
          lVar1 = DAT_09748760;
        }
        DAT_09748728 = 4;
      }
      DAT_09748760 = FUN_03fd3d60(lVar1);
      if (DAT_09748760 != 0) {
        return 0;
      }
      if (DAT_09748728 != 4) {
        return 0;
      }
      FUN_03fd3a5c(1,param_1);
      goto LAB_03fcf7fc;
    }
  }
  else {
    if (DAT_09748728 != 3) goto LAB_03fcf844;
    if (DAT_09535c70 < DAT_09535c60) {
      if ((DAT_09748a60 != (code *)0x0) &&
         (DAT_09535c70 = (*DAT_09748a60)(DAT_09535c70,DAT_09535c68), DAT_09535c60 <= DAT_09535c70))
      {
        return 0;
      }
      if (DAT_09748758 != 0) {
        FUN_03fd3c78(DAT_09748708 << 1);
      }
      DAT_09748728 = 0;
      return 1;
    }
  }
LAB_03fcf700:
  DAT_09535c70 = FUN_03fd2684(DAT_09535c70,DAT_09535c60,DAT_09535c60 + DAT_09748708 * 0x10);
  return 0;
}

