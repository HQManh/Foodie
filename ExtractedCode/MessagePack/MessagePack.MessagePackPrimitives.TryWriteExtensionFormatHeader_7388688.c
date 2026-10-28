// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryWriteExtensionFormatHeader
// address: 0x7388688
// body: available
// range: 0x7388688-0x73888b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73888ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73888b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryWriteExtensionFormatHeader
          (undefined1 *param_1,int param_2,long param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if ((DAT_09520a54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d34e8);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520a54 = 1;
  }
  if (param_3 < 0) {
    uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,DAT_091d34e8);
  }
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  uVar4 = (undefined1)((ulong)param_3 >> 0x20);
  if (0xff < uVar5) {
    uVar1 = (undefined1)((ulong)param_3 >> 0x28);
    if (uVar5 < 0x10000) {
      *param_4 = 4;
      if (param_2 < 4) {
        return 0;
      }
      *param_1 = 200;
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if ((param_2 - 1U & 0xfffffffe) == 0) goto LAB_073888b0;
      param_1[2] = uVar4;
      param_1[1] = uVar1;
      puVar6 = param_1 + 3;
    }
    else {
      *param_4 = 6;
      if (param_2 < 6) {
        return 0;
      }
      *param_1 = 0xc9;
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if ((param_2 - 1U & 0xfffffffc) == 0) {
LAB_073888b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      param_1[4] = uVar4;
      param_1[3] = uVar1;
      param_1[2] = (char)((ulong)param_3 >> 0x30);
      param_1[1] = (char)((ulong)param_3 >> 0x38);
      puVar6 = param_1 + 5;
    }
    goto LAB_07388884;
  }
  if (uVar5 < 5) {
    if ((uVar5 < 5) && ((1 << (ulong)(uVar5 & 0x1f) & 0x16U) != 0)) goto LAB_073887ec;
  }
  else if (((uVar5 & 0xff) == 8) || ((uVar5 & 0xff) == 0x10)) {
LAB_073887ec:
    *param_4 = 2;
    if (param_2 < 2) {
      return 0;
    }
    uVar5 = uVar5 & 0xff;
    if (uVar5 < 4) {
      if (uVar5 == 1) {
        uVar4 = 0xd4;
      }
      else {
        if (uVar5 != 2) {
LAB_073888b4:
          MessagePack_MessagePackPrimitives__ThrowUnreachable();
          thunk_FUN_03fc39d4(&DAT_091842a0);
          uVar2 = thunk_FUN_03f9944c();
          uVar3 = thunk_FUN_03fc39d4(&DAT_0920ac78);
          System_Exception___ctor(uVar2,uVar3,0);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091d3470);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,uVar3);
        }
        uVar4 = 0xd5;
      }
    }
    else if (uVar5 == 4) {
      uVar4 = 0xd6;
    }
    else if (uVar5 == 8) {
      uVar4 = 0xd7;
    }
    else {
      if (uVar5 != 0x10) goto LAB_073888b4;
      uVar4 = 0xd8;
    }
    puVar6 = param_1 + 1;
    *param_1 = uVar4;
    goto LAB_07388884;
  }
  *param_4 = 3;
  if (param_2 < 3) {
    return 0;
  }
  param_1[1] = uVar4;
  *param_1 = 199;
  puVar6 = param_1 + 2;
LAB_07388884:
  *puVar6 = (char)param_3;
  return 1;
}

