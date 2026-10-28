// rea decompile_all
// name: System.Security.Cryptography.HMAC$$UpdateIOPadBuffers
// address: 0x74604bc
// body: available
// range: 0x74604bc-0x7460647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7460634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7460644 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_HMAC__UpdateIOPadBuffers(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((DAT_09521179 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09521179 = 1;
  }
  plVar6 = (long *)(param_1 + 0x50);
  if (*plVar6 == 0) {
    uVar1 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    thunk_FUN_03f5d7b8(plVar6,uVar1);
  }
  plVar7 = (long *)(param_1 + 0x58);
  if (*plVar7 == 0) {
    uVar1 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    thunk_FUN_03f5d7b8(plVar7,uVar1);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0x20;
    do {
      lVar4 = *plVar6;
      if (lVar4 == 0) goto LAB_07460634;
      if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar2 - 0x20U) goto LAB_07460644;
      *(undefined1 *)(lVar4 + lVar2) = 0x36;
      lVar4 = *plVar7;
      if (lVar4 == 0) goto LAB_07460634;
      if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar2 - 0x20U) goto LAB_07460644;
      *(undefined1 *)(lVar4 + lVar2) = 0x5c;
      lVar4 = lVar2 + -0x1f;
      lVar2 = lVar2 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar4 = 0x20;
    do {
      uVar3 = lVar4 - 0x20;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) {
        return;
      }
      lVar5 = *plVar6;
      if (lVar5 == 0) break;
      if ((*(uint *)(lVar5 + 0x18) <= uVar3) || (*(uint *)(lVar2 + 0x18) <= uVar3)) {
LAB_07460644:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(byte *)(lVar5 + lVar4) = *(byte *)(lVar2 + lVar4) ^ *(byte *)(lVar5 + lVar4);
      lVar2 = *plVar7;
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_07460644;
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_07460644;
      *(byte *)(lVar2 + lVar4) = *(byte *)(lVar5 + lVar4) ^ *(byte *)(lVar2 + lVar4);
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(param_1 + 0x28);
    } while (lVar2 != 0);
  }
LAB_07460634:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

