// rea decompile_all
// name: FUN_0404e7a8
// address: 0x404e7a8
// body: available
// range: 0x404e7a8-0x404eb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404e9e0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404ea24 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404ea60 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404ea94 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404eac8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404eafc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404eb30 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0404e7a8(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  uVar1 = param_4 & 0xf;
  puVar9 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0404e8f4;
      if (uVar1 != 1) {
LAB_0404eb00:
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = (undefined8 *)FUN_0404eb34(param_2,param_3);
    }
    else if (uVar1 == 2) {
      puVar3 = (undefined8 *)(ulong)(ushort)*puVar9;
      *param_2 = (long)puVar9 + 2;
    }
    else {
      if (uVar1 != 3) goto LAB_0404eb00;
      puVar3 = (undefined8 *)(ulong)(uint)*puVar9;
      *param_2 = (long)((long)puVar9 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0404e8f4:
      puVar3 = (undefined8 *)*puVar9;
      *param_2 = (long)(puVar9 + 1);
    }
    else {
      if (uVar1 != 9) goto LAB_0404eb00;
      uVar6 = 0;
      uVar4 = 0;
      puVar5 = puVar9;
      puVar8 = puVar9;
      do {
        if (puVar8 == param_3) {
          fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar8;
        puVar5 = (ulong *)((long)puVar5 + 1);
        uVar7 = uVar6 & 0x3f;
        uVar6 = uVar6 + 7;
        uVar4 = ((ulong)bVar2 & 0x7f) << uVar7 | uVar4;
        puVar8 = (ulong *)((long)puVar8 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar5;
      uVar7 = -1L << (uVar6 & 0x3f);
      if (0x38 < (int)uVar6 - 7U || bVar2 < 0x40) {
        uVar7 = 0;
      }
      puVar3 = (undefined8 *)(uVar4 | uVar7);
    }
  }
  else if (uVar1 == 10) {
    puVar3 = (undefined8 *)(long)(short)*puVar9;
    *param_2 = (long)puVar9 + 2;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0404eb00;
      goto LAB_0404e8f4;
    }
    puVar3 = (undefined8 *)(long)(int)(uint)*puVar9;
    *param_2 = (long)((long)puVar9 + 4);
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0404eacc;
      puVar3 = (undefined8 *)((long)puVar3 + (long)puVar9);
    }
LAB_0404e980:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar3;
    }
    return puVar3;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = (undefined8 *)((long)puVar3 + param_5);
      goto LAB_0404e980;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_0404eacc:
  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
  abort();
}

