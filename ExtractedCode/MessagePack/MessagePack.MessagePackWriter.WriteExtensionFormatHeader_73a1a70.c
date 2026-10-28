// rea decompile_all
// name: MessagePack.MessagePackWriter$$WriteExtensionFormatHeader
// address: 0x73a1a70
// body: available
// range: 0x73a1a70-0x73a1b43 inclusive
// range: 0x73a1b48-0x73a1b9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a1b40 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a1b9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackWriter__WriteExtensionFormatHeader(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  uint local_24;
  
  lVar4 = param_1;
  if ((DAT_09520b55 & 1) == 0) {
    lVar4 = FUN_03f5c2a4(&DAT_091d36f8);
    DAT_09520b55 = 1;
  }
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  iVar1 = uVar3 + 6;
  local_24 = 0;
  if ((uVar3 < 0xfffffffa) && (-1 < iVar1)) {
    auVar8 = MessagePack_BufferWriter__GetSpan(param_1,iVar1,0);
    uVar3 = MessagePack_MessagePackPrimitives__TryWriteExtensionFormatHeader
                      (auVar8._0_8_,auVar8._8_8_,param_2,&local_24,0);
    MessagePack_MessagePackWriter__AssumesTrue(uVar3 & 1);
    uVar3 = local_24;
    lVar4 = (long)(int)local_24;
    if (DAT_09516fa7 == '\0') {
      FUN_03f5c2a4(&DAT_091c4240);
      FUN_03f5c2a4(&DAT_091ba910);
      DAT_09516fa7 = '\x01';
    }
    lVar7 = lVar4 + *(int *)(param_1 + 0x28);
    if (lVar7 == (int)lVar7) {
      uVar2 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar3;
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar7 = *(long *)(param_1 + 8);
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      *(long *)(param_1 + 8) = lVar7 + lVar4;
      *(ulong *)(param_1 + 0x10) = (ulong)(uVar2 - uVar3);
      return;
    }
    uVar5 = FUN_03f5c560();
    puVar6 = &DAT_091c4240;
  }
  else {
    uVar5 = FUN_03f5c560(lVar4,iVar1);
    puVar6 = &DAT_091d36f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,*puVar6);
}

