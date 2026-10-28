// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<ReadArrayAsync>d__1$$System.Collections.Generic.IAsyncEnumerable<System.Buffers.ReadOnlySequence<System.Byte>>.GetAsyncEnumerator
// address: 0x739de8c
// body: available
// range: 0x739de8c-0x739e073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739e070 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long MessagePack_MessagePackStreamReader_<ReadArrayAsync>d__1__System_Collections_Generic_IAsyncEnumerable<System_Buffers_ReadOnlySequence<System_Byte>>_GetAsyncEnumerator
               (long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_09520b36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091928e8);
    DAT_09520b36 = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x90), iVar2 = System_Environment__get_CurrentManagedThreadId(0),
     iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    System_Runtime_CompilerServices_AsyncIteratorMethodBuilder__Create(&local_48,0);
    *(undefined8 *)(param_1 + 0x20) = uStack_40;
    *(undefined8 *)(param_1 + 0x18) = local_48;
    *(undefined8 *)(param_1 + 0x28) = local_38;
    thunk_FUN_03f5d7b8(param_1 + 0x18,0);
    *(undefined1 *)(param_1 + 0x80) = 0;
    lVar3 = param_1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_091928e8);
    MessagePack_MessagePackStreamReader_<ReadArrayAsync>d__1___ctor(lVar3,0xfffffffd);
    if (lVar3 == 0) goto LAB_0739e070;
    *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(param_1 + 0x98);
    thunk_FUN_03f5d7b8();
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Threading_CancellationToken__Equals(param_1 + 0xa8,0,0);
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(lVar3 + 0xa0) = param_2;
    goto LAB_0739e050;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Threading_CancellationToken__Equals(&local_28,uVar7,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Threading_CancellationToken__Equals(&local_28,0,0);
    uVar7 = local_28;
    if ((uVar4 & 1) != 0) goto LAB_0739dfec;
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(DAT_09182368 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource(uVar8,uVar7,0);
    plVar6 = (long *)(param_1 + 0x88);
    *plVar6 = lVar5;
    thunk_FUN_03f5d7b8(plVar6,lVar5);
    if (*plVar6 == 0) {
LAB_0739e070:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = System_Threading_CancellationTokenSource__get_Token(*plVar6,0);
  }
  else {
LAB_0739dfec:
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
  }
  *(undefined8 *)(lVar3 + 0xa0) = uVar7;
LAB_0739e050:
  thunk_FUN_03f5d7b8(lVar3 + 0xa0,0);
  return lVar3;
}

