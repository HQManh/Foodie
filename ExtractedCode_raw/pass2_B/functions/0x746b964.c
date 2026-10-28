// rea decompile_all
// name: System.Security.Cryptography.Utils$$QuadWordToBigEndian
// address: 0x746b964
// body: available
// range: 0x746b964-0x746bb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746bb14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746bb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_Utils__QuadWordToBigEndian(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  if (0 < (int)param_3) {
    if (param_2 == 0) {
LAB_0746bb18:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = 0;
    uVar4 = 0;
    lVar2 = param_2 + 0x20;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar4) {
LAB_0746bb14:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (param_1 == 0) goto LAB_0746bb18;
      uVar5 = (uint)lVar6;
      if (((((*(uint *)(param_1 + 0x18) <= uVar5) ||
            (*(undefined1 *)(param_1 + (int)uVar5 + 0x20) = *(undefined1 *)(lVar2 + lVar6 + 7),
            *(uint *)(param_2 + 0x18) <= uVar4)) || (*(uint *)(param_1 + 0x18) <= uVar5 + 1)) ||
          (((*(char *)(param_1 + (int)(uVar5 + 1) + 0x20) = (char)*(undefined2 *)(lVar2 + lVar6 + 6)
            , *(uint *)(param_2 + 0x18) <= uVar4 || (*(uint *)(param_1 + 0x18) <= uVar5 + 2)) ||
           ((*(char *)(param_1 + (int)(uVar5 + 2) + 0x20) =
                  (char)((ulong)*(undefined8 *)(lVar2 + lVar6) >> 0x28),
            *(uint *)(param_2 + 0x18) <= uVar4 ||
            ((*(uint *)(param_1 + 0x18) <= uVar5 + 3 ||
             (*(char *)(param_1 + (int)(uVar5 + 3) + 0x20) =
                   (char)*(undefined4 *)(lVar2 + lVar6 + 4), *(uint *)(param_2 + 0x18) <= uVar4)))))
           ))) || ((*(uint *)(param_1 + 0x18) <= uVar5 + 4 ||
                   (((((*(char *)(param_1 + (int)(uVar5 + 4) + 0x20) =
                             (char)((ulong)*(undefined8 *)(lVar2 + lVar6) >> 0x18),
                       *(uint *)(param_2 + 0x18) <= uVar4 ||
                       (*(uint *)(param_1 + 0x18) <= uVar5 + 5)) ||
                      (*(char *)(param_1 + (int)(uVar5 + 5) + 0x20) =
                            (char)((ulong)*(undefined8 *)(lVar2 + lVar6) >> 0x10),
                      *(uint *)(param_2 + 0x18) <= uVar4)) ||
                     ((*(uint *)(param_1 + 0x18) <= uVar5 + 6 ||
                      (*(char *)(param_1 + (int)(uVar5 + 6) + 0x20) =
                            (char)((ulong)*(undefined8 *)(lVar2 + lVar6) >> 8),
                      *(uint *)(param_2 + 0x18) <= uVar4)))) ||
                    (*(uint *)(param_1 + 0x18) <= uVar5 + 7)))))) goto LAB_0746bb14;
      puVar1 = (undefined8 *)(lVar2 + lVar6);
      lVar3 = lVar6 + 8;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 8;
      *(char *)(param_1 + (int)(uVar5 + 7) + 0x20) = (char)*puVar1;
    } while ((ulong)param_3 << 3 != lVar3);
  }
  return;
}

