// rea decompile_all
// name: MessagePack.BufferWriter$$WriteMultiBuffer
// address: 0x7381fac
// body: available
// range: 0x7381fac-0x7382177 inclusive
// range: 0x738217c-0x73821f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73820b4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7382174 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73821f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_BufferWriter__WriteMultiBuffer(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long local_70;
  ulong uStack_68;
  
  if ((DAT_09520a16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4258);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091b9778);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520a16 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  if (0 < (int)param_3) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    uVar8 = 0;
    uVar2 = param_3;
    do {
      if ((int)uVar7 == 0) {
        MessagePack_BufferWriter__EnsureMore(param_1,0);
        uVar7 = (ulong)*(uint *)(param_1 + 0x10);
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Math__Min((ulong)uVar2,uVar7,0);
      if ((param_3 < uVar8) || (param_3 - uVar8 < uVar4)) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b9778 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = param_2 + (int)uVar8;
      uStack_68 = (ulong)uVar4;
      FUN_05ff5c28(&local_70,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   DAT_091b9760);
      if ((ulong)((long)(int)uVar4 + -0x80000000 + (long)(int)uVar8) < 0xffffffff00000000) {
LAB_073821d0:
        uVar5 = FUN_03f5c560();
        puVar6 = &DAT_091c4258;
LAB_073821ec:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,*puVar6);
      }
      if (0x7fffffff < (long)((ulong)uVar2 - (long)(int)uVar4)) goto LAB_073821d0;
      if (DAT_09516fa7 == '\0') {
        FUN_03f5c2a4(&DAT_091c4240);
        FUN_03f5c2a4(&DAT_091ba910);
        DAT_09516fa7 = '\x01';
      }
      lVar3 = DAT_091ba910;
      if ((ulong)((long)(int)uVar4 + -0x80000000 + (long)*(int *)(param_1 + 0x28)) <
          0xffffffff00000000) {
        uVar5 = FUN_03f5c560();
        puVar6 = &DAT_091c4240;
        goto LAB_073821ec;
      }
      uVar1 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar4;
      if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar9 = *(long *)(param_1 + 8);
      if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar2 = uVar2 - uVar4;
      uVar7 = (ulong)(uVar1 - uVar4);
      uVar8 = uVar4 + uVar8;
      *(long *)(param_1 + 8) = lVar9 + (int)uVar4;
      *(ulong *)(param_1 + 0x10) = uVar7;
    } while (0 < (int)uVar2);
  }
  return;
}

