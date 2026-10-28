// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<ReadArrayAsync>d__1$$System.Collections.Generic.IAsyncEnumerator<System.Buffers.ReadOnlySequence<System.Byte>>.MoveNextAsync
// address: 0x739e074
// body: available
// range: 0x739e074-0x739e1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
MessagePack_MessagePackStreamReader_<ReadArrayAsync>d__1__System_Collections_Generic_IAsyncEnumerator<System_Buffers_ReadOnlySequence<System_Byte>>_MoveNextAsync
          (long param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  long lVar5;
  long local_38;
  long local_30;
  byte local_28;
  undefined1 uStack_27;
  undefined2 local_26;
  undefined4 local_24;
  
  if ((DAT_09520b37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1118);
    FUN_03f5c2a4(&DAT_091b4688);
    FUN_03f5c2a4(&DAT_091b4690);
    FUN_03f5c2a4(&DAT_091b46a0);
    FUN_03f5c2a4(&DAT_091b46b8);
    FUN_03f5c2a4(&DAT_091beb50);
    FUN_03f5c2a4(&DAT_091beb58);
    DAT_09520b37 = 1;
  }
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) == -2) {
    local_30 = 0;
    local_28 = 0;
    uStack_27 = 0;
    local_26 = 0;
    local_24 = 0;
  }
  else {
    FUN_05a22020(param_1 + 0x30,DAT_091b46a0);
    lVar3 = DAT_091c1118;
    lVar5 = *(long *)(DAT_091c1118 + 0x38);
    local_38 = param_1;
    if (lVar5 == 0) {
      FUN_03f95ac8(DAT_091c1118);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    FUN_0498b30c(&local_38,*(undefined8 *)(lVar5 + 8));
    uVar1 = *(undefined2 *)(param_1 + 0x60);
    iVar4 = FUN_05a2211c(param_1 + 0x30,uVar1,DAT_091b4690);
    if (iVar4 == 1) {
      local_28 = FUN_05a221ec(param_1 + 0x30,uVar1,DAT_091b4688);
      local_28 = local_28 & 1;
      local_30 = 0;
      uStack_27 = 0;
      local_26 = 0;
      local_24 = 0;
      thunk_FUN_03f5d7b8(&local_30,0);
      local_26 = 0;
    }
    else {
      local_28 = 0;
      uStack_27 = 0;
      local_26 = 0;
      local_24 = 0;
      local_30 = param_1;
      thunk_FUN_03f5d7b8(&local_30,param_1);
      local_28 = 0;
      local_26 = uVar1;
    }
    local_24 = CONCAT31(local_24._1_3_,1);
  }
  auVar2[8] = local_28;
  auVar2._0_8_ = local_30;
  auVar2[9] = uStack_27;
  auVar2._10_2_ = local_26;
  auVar2._12_4_ = local_24;
  return auVar2;
}

