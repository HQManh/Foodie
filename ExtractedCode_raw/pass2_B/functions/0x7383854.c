// rea decompile_all
// name: MessagePack.TinyJsonReader$$ReadString
// address: 0x7383854
// body: available
// range: 0x7383854-0x7383baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7383b4c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7383b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7383b94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7383b98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7383bac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_TinyJsonReader__ReadString(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if ((DAT_09520a24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091db858);
    DAT_09520a24 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
LAB_07383b50:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
  puVar10 = (undefined8 *)(param_1 + 0x20);
  plVar5 = (long *)*puVar10;
  if (plVar5 == (long *)0x0) {
    uVar8 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(uVar8,0);
    *puVar10 = uVar8;
    thunk_FUN_03f5d7b8(puVar10,uVar8);
    plVar5 = (long *)*puVar10;
  }
  else {
    System_Text_StringBuilder__set_Length(plVar5,0,0);
  }
  plVar6 = *(long **)(param_1 + 0x10);
joined_r0x07383914:
  if (plVar6 == (long *)0x0) goto LAB_07383b50;
  iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
  if (iVar3 == -1) {
LAB_07383b54:
    thunk_FUN_03fc39d4(&DAT_0918be40);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09205268);
    MessagePack_TinyJsonException___ctor(uVar8,uVar9);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091db858);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  uVar4 = MessagePack_TinyJsonReader__ReadChar(param_1);
  if ((uVar4 & 0xffff) != 0x5c) {
    if ((uVar4 & 0xffff) == 0x22) {
      *(undefined1 *)(param_1 + 0x2c) = 7;
      if (plVar5 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        *(undefined8 *)(param_1 + 0x58) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar8);
        return;
      }
    }
    else {
joined_r0x07383ae4:
      if (plVar5 != (long *)0x0) goto LAB_073839bc;
    }
    goto LAB_07383b50;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) goto LAB_07383b50;
  iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
  if (iVar3 == -1) goto LAB_07383b54;
  uVar4 = MessagePack_TinyJsonReader__ReadChar(param_1);
  uVar1 = uVar4 & 0xffff;
  if (uVar1 < 0x5d) {
    if ((0x3a < uVar1 - 0x22) || ((1L << ((ulong)(uVar1 - 0x22) & 0x3f) & 0x400000000002001U) == 0))
    goto LAB_073839c8;
    goto joined_r0x07383ae4;
  }
  if (uVar1 < 0x67) {
    if ((uVar4 & 0xffff) == 0x62) {
      if (plVar5 == (long *)0x0) goto LAB_07383b50;
      uVar4 = 8;
    }
    else {
      if ((uVar4 & 0xffff) != 0x66) goto LAB_073839c8;
      if (plVar5 == (long *)0x0) goto LAB_07383b50;
      uVar4 = 0xc;
    }
  }
  else {
    uVar4 = uVar4 & 0xffff;
    if (0x73 < uVar4) {
      if (uVar4 == 0x74) {
        if (plVar5 != (long *)0x0) {
          uVar4 = 9;
          goto LAB_073839bc;
        }
        goto LAB_07383b50;
      }
      if (uVar4 == 0x75) {
        lVar7 = FUN_03f5c394(DAT_0917fcc8,4);
        uVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_07383b98:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined2 *)(lVar7 + 0x20) = uVar2;
          uVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_07383b98;
          *(undefined2 *)(lVar7 + 0x22) = uVar2;
          uVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_07383b98;
          *(undefined2 *)(lVar7 + 0x24) = uVar2;
          uVar2 = MessagePack_TinyJsonReader__ReadChar(param_1);
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_07383b98;
          *(undefined2 *)(lVar7 + 0x26) = uVar2;
          uVar8 = System_String__CreateString(0,lVar7,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          uVar4 = System_Convert__ToInt32(uVar8,0x10,0);
          if (0xffff < (int)uVar4) {
            uVar8 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,DAT_091db858);
          }
          goto joined_r0x07383ae4;
        }
        goto LAB_07383b50;
      }
      goto LAB_073839c8;
    }
    if (uVar4 != 0x6e) {
      if (uVar4 != 0x72) goto LAB_073839c8;
      if (plVar5 != (long *)0x0) {
        uVar4 = 0xd;
        goto LAB_073839bc;
      }
      goto LAB_07383b50;
    }
    if (plVar5 == (long *)0x0) goto LAB_07383b50;
    uVar4 = 10;
  }
LAB_073839bc:
  System_Text_StringBuilder__Append(plVar5,uVar4,0);
LAB_073839c8:
  plVar6 = *(long **)(param_1 + 0x10);
  goto joined_r0x07383914;
}

