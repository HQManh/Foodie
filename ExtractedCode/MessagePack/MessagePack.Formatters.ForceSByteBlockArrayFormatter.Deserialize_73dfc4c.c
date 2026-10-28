// rea decompile_all
// name: MessagePack.Formatters.ForceSByteBlockArrayFormatter$$Deserialize
// address: 0x73dfc4c
// body: available
// range: 0x73dfc4c-0x73dfe63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73dfe3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dfe40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dfe44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dfe58 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dfe60 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073dfe5c) */

long MessagePack_Formatters_ForceSByteBlockArrayFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_09520d50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c02d8);
    FUN_03f5c2a4(&DAT_091ccdd0);
    FUN_03f5c2a4(&DAT_091804c8);
    DAT_09520d50 = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar2 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar2 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    lVar7 = 0;
  }
  else {
    iVar4 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar7 = DAT_091c02d8;
    if (iVar4 == 0) {
      lVar6 = *(long *)(DAT_091c02d8 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c02d8);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
    }
    else {
      lVar7 = FUN_03f5c394(DAT_091804c8,iVar4);
      if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar8 = 0;
        do {
          uVar3 = MessagePack_MessagePackReader__ReadSByte(param_2,0);
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined1 *)(lVar7 + 0x20 + uVar8) = uVar3;
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)uVar1);
      }
      if (*(int *)(param_2 + 0x88) == -0x80000000) {
        uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,DAT_091ccdd0);
      }
      *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
    }
  }
  return lVar7;
}

