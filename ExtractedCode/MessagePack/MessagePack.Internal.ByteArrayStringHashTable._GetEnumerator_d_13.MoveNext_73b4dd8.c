// rea decompile_all
// name: MessagePack.Internal.ByteArrayStringHashTable.<GetEnumerator>d__13$$MoveNext
// address: 0x73b4dd8
// body: available
// range: 0x73b4dd8-0x73b4f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b4f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b4f60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_ByteArrayStringHashTable_<GetEnumerator>d__13__MoveNext(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09520c00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a9808);
    DAT_09520c00 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = *(int *)(param_1 + 0x48) + 1;
    *(uint *)(param_1 + 0x48) = uVar4;
    goto LAB_073b4e88;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30));
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    while( true ) {
      plVar2 = (long *)(param_1 + 0x30);
      lVar5 = *plVar2;
      if (lVar5 == 0) break;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) {
        *plVar2 = 0;
        thunk_FUN_03f5d7b8(plVar2,0);
        return 0;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_073b4f60:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar5 != 0) {
        *(long *)(param_1 + 0x40) = lVar5;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x40));
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
LAB_073b4e88:
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 == 0) break;
        if ((int)uVar4 < (int)*(uint *)(lVar5 + 0x18)) {
          if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_073b4f60;
          lVar5 = lVar5 + (long)(int)uVar4 * 0x10;
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          uVar1 = *(ulong *)(lVar5 + 0x28);
          plVar2 = (long *)System_Text_Encoding__get_UTF8(0);
          if (plVar2 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar2 + 0x368))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x370));
            local_30 = 0;
            uStack_28 = 0;
            FUN_05614570(&local_30,uVar3,uVar1 & 0xffffffff,DAT_091a9808);
            *(undefined8 *)(param_1 + 0x20) = uStack_28;
            *(undefined8 *)(param_1 + 0x18) = local_30;
            thunk_FUN_03f5d7b8(param_1 + 0x18,0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          break;
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),0);
        uVar4 = *(uint *)(param_1 + 0x38);
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x38) = uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

