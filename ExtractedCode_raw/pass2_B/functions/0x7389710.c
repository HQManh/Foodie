// rea decompile_all
// name: MessagePack.MessagePackPrimitives.Decoders.ReadInt64UInt16$$Read
// address: 0x7389710
// body: available
// range: 0x7389710-0x73897c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7389770 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
MessagePack_MessagePackPrimitives_Decoders_ReadInt64UInt16__Read
          (undefined8 param_1,long param_2,int param_3,ulong *param_4,undefined4 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  ushort local_34 [2];
  
  if ((DAT_09520a5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9770);
    DAT_09520a5e = 1;
  }
  lVar1 = DAT_091b9770;
  local_34[0] = 0;
  *param_5 = 3;
  if (param_3 != 0) {
    if ((*(ushort *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_2 + 1,param_3 + -1,local_34);
    uVar3 = (ulong)local_34[0];
    uVar4 = 0;
    if ((uVar2 & 1) == 0) {
      uVar4 = 3;
      uVar3 = 0;
    }
    *param_4 = uVar3;
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
}

