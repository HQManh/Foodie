// rea decompile_all
// name: MessagePack.Internal.ByteArrayStringHashTable$$TryGetValueSlow
// address: 0x73b4938
// body: available
// range: 0x73b4938-0x73b4a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b4a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool MessagePack_Internal_ByteArrayStringHashTable__TryGetValueSlow
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 *param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09520bfa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c44e0);
    FUN_03f5c2a4(&DAT_091d2f68);
    FUN_03f5c2a4(&DAT_091b97a8);
    DAT_09520bfa = 1;
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar3 = 1 < *(int *)(param_4 + 0x18);
  if (1 < *(int *)(param_4 + 0x18)) {
    puVar4 = (undefined4 *)(param_4 + 0x38);
    lVar5 = 1;
    do {
      auVar6 = FUN_05ff6120(*(undefined8 *)(puVar4 + -2),DAT_091b97a8);
      uVar1 = FUN_073b6268(param_2,param_3,auVar6._0_8_,auVar6._8_8_,DAT_091d2f68);
      if ((uVar1 & 1) != 0) {
        uVar2 = *puVar4;
        goto LAB_073b4a10;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 4;
      bVar3 = lVar5 < *(int *)(param_4 + 0x18);
    } while (lVar5 < *(int *)(param_4 + 0x18));
  }
  uVar2 = 0;
LAB_073b4a10:
  *param_5 = uVar2;
  return bVar3;
}

