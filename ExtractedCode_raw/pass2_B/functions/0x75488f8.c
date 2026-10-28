// rea decompile_all
// name: System.Globalization.CultureInfo$$ConstructInvariant
// address: 0x75488f8
// body: available
// range: 0x75488f8-0x7548aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75489d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7548aa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CultureInfo__ConstructInvariant(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_095218fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a80);
    FUN_03f5c2a4(&DAT_09205c48);
    FUN_03f5c2a4(&DAT_092045f0);
    FUN_03f5c2a4(&DAT_0921dd30);
    DAT_095218fb = 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x7f;
  lVar1 = System_Globalization_NumberFormatInfo__get_InvariantInfo(0);
  thunk_FUN_03f6a5cc();
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = lVar1;
  thunk_FUN_03f5d7b8(plVar4,lVar1);
  if ((param_2 & 1) == 0) {
    lVar1 = *plVar4;
    thunk_FUN_03f6a5cc();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = (long *)System_Globalization_NumberFormatInfo__Clone(lVar1,0);
    thunk_FUN_03f6a5cc();
    lVar1 = DAT_09188a80;
    if (plVar2 == (long *)0x0) {
      *plVar4 = 0;
    }
    else {
      if (*plVar2 != DAT_09188a80) {
LAB_075489cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2);
      }
      *plVar4 = (long)plVar2;
      if (*plVar2 != lVar1) goto LAB_075489cc;
    }
    thunk_FUN_03f5d7b8(plVar4,plVar2);
  }
  uVar3 = System_Globalization_TextInfo__get_Invariant(0);
  thunk_FUN_03f6a5cc();
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar3);
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  uVar3 = DAT_09205c48;
  *(undefined8 *)(param_1 + 0x58) = DAT_09205c48;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar3);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar3);
  *(undefined8 *)(param_1 + 0x60) = DAT_092045f0;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x68) = DAT_0921dd30;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x70) = DAT_092045f0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x24) = 0x101;
  return;
}

