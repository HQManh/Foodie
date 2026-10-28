// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadDateTime
// address: 0x73855e4
// body: available
// range: 0x73855e4-0x73856ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7385678 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73856ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackPrimitives__TryReadDateTime
               (long param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_44;
  undefined8 local_38;
  
  if ((DAT_09520a31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3488);
    FUN_03f5c2a4(&DAT_091b9770);
    DAT_09520a31 = 1;
  }
  local_38 = 0;
  local_44 = 0;
  iVar3 = MessagePack_MessagePackPrimitives__TryReadExtensionHeader
                    (param_1,param_2,&local_38,param_4);
  if (iVar3 == 0) {
    uVar2 = *param_4;
    if ((uint)param_2 < uVar2) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    MessagePack_MessagePackPrimitives__TryReadDateTime
              (param_1 + (int)uVar2,(uint)param_2 - uVar2,local_38,param_3,&local_44);
    lVar1 = (long)(int)*param_4 + (long)local_44;
    if (lVar1 != (int)lVar1) {
      uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,DAT_091d3488);
    }
    *param_4 = local_44 + *param_4;
  }
  else {
    *param_3 = 0;
  }
  return;
}

