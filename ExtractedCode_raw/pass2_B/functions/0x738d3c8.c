// rea decompile_all
// name: MessagePack.MessagePackReader$$TryReadStringSpan
// address: 0x738d3c8
// body: available
// range: 0x738d3c8-0x738d5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738d53c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738d59c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738d5a0 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_MessagePackReader__TryReadStringSpan(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((DAT_09520a9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3558);
    FUN_03f5c2a4(&DAT_091b9778);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9f98);
    FUN_03f5c2a4(&DAT_091b9fc0);
    FUN_03f5c2a4(&DAT_091b9fd0);
    FUN_03f5c2a4(&DAT_091b9fc8);
    FUN_03f5c2a4(&DAT_091b9fe8);
    DAT_09520a9a = 1;
  }
  cVar3 = MessagePack_MessagePackReader__get_NextCode(param_1);
  if (cVar3 == -0x40) {
LAB_0738d50c:
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  uVar8 = *(ulong *)(param_1 + 0x78);
  uVar4 = MessagePack_MessagePackReader__GetStringLengthInBytes(param_1);
  if (-1 < (int)uVar4) {
    uVar7 = (ulong)uVar4;
    lVar5 = FUN_06097630(param_1,DAT_091b9fe8);
    if (lVar5 < (long)uVar7) {
                    /* WARNING: Subroutine does not return */
      MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    if ((long)((long)(int)uVar2 + uVar7) < 0x80000000) {
      uVar1 = *(uint *)(param_1 + 0x68);
      if ((int)(uVar2 + uVar4) <= (int)uVar1) {
        lVar5 = *(long *)(param_1 + 0x60);
        if ((uVar2 <= uVar1) && (uVar4 <= uVar1 - uVar2)) {
          if ((*(ushort *)(*(long *)(DAT_091b9778 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          *param_2 = lVar5 + (int)uVar2;
          param_2[1] = uVar7;
          FUN_042658c0(param_1,uVar7,DAT_091b9f90);
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar5 = *(long *)(param_1 + 0x78);
      if ((((long)uVar8 < 0) || ((long)(uVar8 | 0x8000000000000000) <= lVar5)) &&
         ((-1 < (long)uVar8 || (lVar5 <= (long)(uVar8 + 0x7fffffffffffffff))))) {
        FUN_0739d534(param_1,lVar5 - uVar8,DAT_091b9f98);
        goto LAB_0738d50c;
      }
    }
  }
  uVar6 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,DAT_091d3558);
}

