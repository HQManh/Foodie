// rea decompile_all
// name: MessagePack.Formatters.Int64ArrayFormatter$$Deserialize
// address: 0x73e0dbc
// body: available
// range: 0x73e0dbc-0x73e0f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e0f38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e0f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_Formatters_Int64ArrayFormatter__Deserialize(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_09520d68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0240);
    FUN_03f5c2a4(&DAT_091d0fa0);
    FUN_03f5c2a4(&DAT_091801c0);
    DAT_09520d68 = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar5 = 0;
  }
  else {
    iVar2 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar5 = DAT_091c0240;
    if (iVar2 == 0) {
      lVar4 = *(long *)(DAT_091c0240 + 0x38);
      if (lVar4 == 0) {
        FUN_03f95ac8(DAT_091c0240);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
    }
    else {
      lVar5 = FUN_03f5c394(DAT_091801c0,iVar2);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar6 = 0;
        do {
          uVar3 = MessagePack_MessagePackReader__ReadInt64(param_2,0);
          if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar2 = *(int *)(lVar5 + 0x18);
          lVar4 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(lVar5 + lVar4 + 0x20) = uVar3;
        } while ((long)uVar6 < (long)iVar2);
      }
    }
  }
  return lVar5;
}

