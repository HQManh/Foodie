// rea decompile_all
// name: MessagePack.MessagePackWriter$$WriteString_PostEncoding
// address: 0x73a1f64
// body: available
// range: 0x73a1f64-0x73a20b7 inclusive
// range: 0x73a20bc-0x73a21c3 inclusive
// range: 0x73a21c8-0x73a222b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a20b4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a21c0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a2228 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackWriter__WriteString_PostEncoding
               (long param_1,undefined1 *param_2,int param_3,ulong param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar3;
  
  uVar1 = (uint)param_4;
  if ((DAT_09520b58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3718);
    DAT_09520b58 = 1;
  }
  if ((int)uVar1 < 0x20) {
    if (param_3 != 1) {
      System_Buffer__MemoryCopy(param_2 + param_3,param_2 + 1,(long)(int)uVar1,(long)(int)uVar1,0);
    }
    if (0xff < (int)(uVar1 | 0xa0)) {
LAB_073a2218:
      uVar4 = FUN_03f5c560();
      puVar6 = &DAT_091d3718;
      goto LAB_073a2224;
    }
    *param_2 = (char)(uVar1 | 0xa0);
    uVar1 = uVar1 + 1;
    if (DAT_09516fa7 == '\0') {
      FUN_03f5c2a4(&DAT_091c4240);
      FUN_03f5c2a4(&DAT_091ba910);
      DAT_09516fa7 = '\x01';
    }
    lVar8 = (long)*(int *)(param_1 + 0x28) + (long)(int)uVar1;
    if (lVar8 == (int)lVar8) {
      uVar5 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar1;
      if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      uVar7 = (ulong)(int)uVar1;
      lVar8 = *(long *)(param_1 + 8);
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar5 = uVar5 - uVar1;
      goto LAB_073a21e4;
    }
  }
  else {
    uVar2 = (undefined1)param_4;
    uVar3 = (undefined1)(param_4 >> 8);
    if (uVar1 < 0x100) {
      if (*(char *)(param_1 + 0x58) != '\0') goto LAB_073a20e8;
      if (param_3 != 2) {
        System_Buffer__MemoryCopy
                  (param_2 + param_3,param_2 + 2,param_4 & 0xffffffff,param_4 & 0xffffffff,0);
      }
      param_2[1] = uVar2;
      uVar1 = uVar1 + 2;
      *param_2 = 0xd9;
    }
    else if (uVar1 >> 0x10 == 0) {
LAB_073a20e8:
      if (param_3 != 3) {
        System_Buffer__MemoryCopy
                  (param_2 + param_3,param_2 + 3,param_4 & 0xffffffff,param_4 & 0xffffffff,0);
      }
      param_2[2] = uVar2;
      *param_2 = 0xda;
      uVar1 = uVar1 + 3;
      param_2[1] = uVar3;
    }
    else {
      if (param_3 != 5) {
        System_Buffer__MemoryCopy
                  (param_2 + param_3,param_2 + 5,param_4 & 0xffffffff,param_4 & 0xffffffff,0);
      }
      *param_2 = 0xdb;
      param_2[2] = (char)(param_4 >> 0x10);
      param_2[1] = (char)(param_4 >> 0x18);
      param_2[3] = uVar3;
      param_2[4] = uVar2;
      if (0x7ffffffa < uVar1) goto LAB_073a2218;
      uVar1 = uVar1 + 5;
    }
    uVar7 = (ulong)uVar1;
    if (DAT_09516fa7 == '\0') {
      FUN_03f5c2a4(&DAT_091c4240);
      FUN_03f5c2a4(&DAT_091ba910);
      DAT_09516fa7 = '\x01';
    }
    if (0xfffffffeffffffff < (uVar7 | 0xffffffff80000000) + (long)*(int *)(param_1 + 0x28)) {
      uVar5 = *(uint *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar1;
      if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar8 = *(long *)(param_1 + 8);
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar5 = uVar5 - uVar1;
LAB_073a21e4:
      *(ulong *)(param_1 + 8) = lVar8 + uVar7;
      *(ulong *)(param_1 + 0x10) = (ulong)uVar5;
      return;
    }
  }
  uVar4 = FUN_03f5c560();
  puVar6 = &DAT_091c4240;
LAB_073a2224:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,*puVar6);
}

