// rea decompile_all
// name: MessagePack.MessagePackReader$$TryReadArrayHeader
// address: 0x738b98c
// body: available
// range: 0x738b98c-0x738badf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738ba44 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738badc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_MessagePackReader__TryReadArrayHeader(long param_1,undefined4 *param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_38;
  
  if ((DAT_09520a90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3548);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9ff8);
    DAT_09520a90 = 1;
  }
  lVar3 = DAT_091b9ff8;
  local_38 = 0;
  lVar6 = *(long *)(DAT_091b9ff8 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_03f95a6c();
    lVar6 = *(long *)(lVar3 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  if ((uVar2 & 1) == 0) {
    FUN_03f95a6c();
    lVar6 = *(long *)(lVar3 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  uVar5 = *(uint *)(param_1 + 0x70);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  uVar8 = (uint)uVar7;
  if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  iVar4 = MessagePack_MessagePackPrimitives__TryReadArrayHeader
                    (lVar1 + (int)uVar5,uVar8 - uVar5,(long)&local_38 + 4,&local_38);
  if (-1 < local_38) {
    *param_2 = local_38._4_4_;
    if (iVar4 == 0) {
      FUN_042658c0(param_1,(long)(int)local_38,DAT_091b9f90);
      uVar5 = 1;
    }
    else {
      uVar5 = MessagePack_MessagePackReader__<TryReadArrayHeader>g__SlowPath_34_0
                        (param_1,iVar4,param_2,&local_38);
    }
    return uVar5 & 1;
  }
  uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,DAT_091d3548);
}

