// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadDateTime
// address: 0x73858ec
// body: available
// range: 0x73858ec-0x7385bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7385ad8 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7385bbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryReadDateTime
          (long param_1,undefined8 param_2,long param_3,undefined8 *param_4,int *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  undefined8 local_60;
  ulong local_58;
  uint local_4c;
  long local_48;
  
  if ((DAT_09520a32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183558);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091d3490);
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520a32 = 1;
  }
  local_4c = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_3 < 0) {
    uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,DAT_091d3490);
  }
  iVar6 = (int)((ulong)param_3 >> 0x20);
  *param_5 = iVar6;
  if ((~(uint)param_3 & 0xff) != 0) {
LAB_07385a18:
    *param_4 = 0;
    return 1;
  }
  uVar2 = (uint)param_2;
  if ((int)uVar2 < iVar6) {
    *param_4 = 0;
    return 3;
  }
  if (iVar6 == 0xc) {
    uVar3 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_1,param_2,&local_4c);
    MessagePack_MessagePackPrimitives__AssumesTrue(uVar3 & 1);
    uVar3 = local_4c;
    if (uVar2 < 4) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b9770 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_48 = 0;
    uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_1 + 4,uVar2 - 4,&local_48);
    lVar1 = local_48;
    MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
    if (*(int *)(DAT_09183558 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = (double)lVar1;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar2 & 1) == 0) {
      dVar7 = 0.0;
    }
    local_60 = System_DateTime__AddSeconds(dVar7,*(undefined8 *)(DAT_09183558 + 0xb8),0);
    uVar5 = (ulong)uVar3 / 100;
  }
  else {
    if (iVar6 != 8) {
      if (iVar6 != 4) goto LAB_07385a18;
      uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_1,param_2,&local_4c);
      MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
      if (*(int *)(DAT_09183558 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = local_4c;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_DateTime__AddSeconds((double)uVar2,*(undefined8 *)(DAT_09183558 + 0xb8),0);
      goto LAB_07385b84;
    }
    uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_1,param_2,&local_58);
    MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
    uVar5 = local_58;
    if (*(int *)(DAT_09183558 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = System_DateTime__AddSeconds
                         ((double)(uVar5 & 0x3ffffffff),*(undefined8 *)(DAT_09183558 + 0xb8),0);
    uVar5 = uVar5 / 0x19000000000;
  }
  uVar4 = System_DateTime__AddTicks(&local_60,uVar5,0);
LAB_07385b84:
  *param_4 = uVar4;
  return 0;
}

