// rea decompile_all
// name: System.IO.BinaryReader$$InternalReadChars
// address: 0x758386c
// body: available
// range: 0x758386c-0x7583b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7583afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7583b10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7583b78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7583b7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_IO_BinaryReader__InternalReadChars(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  
  if ((DAT_09521af9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c3db8);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183810);
    FUN_03f5c2a4(&DAT_09188030);
    DAT_09521af9 = 1;
  }
  plVar11 = (long *)(param_1 + 0x28);
  if (*plVar11 == 0) {
    lVar4 = FUN_03f5c394(DAT_0917fc88,0x80);
    *plVar11 = lVar4;
    thunk_FUN_03f5d7b8(plVar11,lVar4);
  }
  iVar12 = param_4;
  if (0 < param_4) {
    do {
      plVar5 = *(long **)(param_1 + 0x20);
      iVar3 = iVar12;
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        if ((*(byte *)(DAT_09183810 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09183810 + 0x130) * 8 + -8) ==
            DAT_09183810)) {
          uVar1 = (**(code **)(lVar4 + 0x218))(plVar5,*(undefined8 *)(lVar4 + 0x220));
          iVar3 = iVar12 - (iVar12 != 1 & uVar1);
        }
      }
      plVar5 = *(long **)(param_1 + 0x10);
      iVar3 = iVar3 << (ulong)(*(byte *)(param_1 + 0x44) & 0x1f);
      if (0x7f < iVar3) {
        iVar3 = 0x80;
      }
      if (*(char *)(param_1 + 0x45) == '\0') {
        if (plVar5 == (long *)0x0) goto LAB_07583afc;
        uVar2 = (**(code **)(*plVar5 + 0x368))
                          (plVar5,*plVar11,0,iVar3,*(undefined8 *)(*plVar5 + 0x370));
        uVar1 = 0;
        plVar5 = plVar11;
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_07583afc;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09188030 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09188030 + 0x130) * 8 + -8) !=
            DAT_09188030)) goto LAB_07583afc;
        uVar1 = *(uint *)((long)plVar5 + 0x34);
        uVar2 = System_IO_MemoryStream__InternalEmulateRead(plVar5,iVar3,0);
        plVar5 = plVar5 + 5;
      }
      if (uVar2 == 0) break;
      if ((int)(uVar2 | uVar1) < 0) {
LAB_07583b14:
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar6 = thunk_FUN_03f9944c();
        puVar7 = &DAT_092186f0;
LAB_07583b50:
        uVar8 = thunk_FUN_03fc39d4(puVar7);
        System_ArgumentOutOfRangeException___ctor(uVar6,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091c3db8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar8);
      }
      if ((ulong)uVar2 + (ulong)uVar1 >> 0x1f != 0) {
LAB_07583b00:
        uVar6 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,DAT_091c3db8);
      }
      lVar4 = *plVar5;
      if (lVar4 == 0) {
LAB_07583afc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = (int)*(ulong *)(lVar4 + 0x18);
      if (iVar3 < (int)(uVar2 + uVar1)) goto LAB_07583b14;
      if (param_3 < 0) {
LAB_07583b34:
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar6 = thunk_FUN_03f9944c();
        puVar7 = &DAT_09218b68;
        goto LAB_07583b50;
      }
      if (param_3 + iVar12 < 0) goto LAB_07583b00;
      if (param_2 == 0) goto LAB_07583afc;
      iVar9 = (int)*(ulong *)(param_2 + 0x18);
      if (iVar9 < param_3 + iVar12) goto LAB_07583b34;
      if ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) == 0) {
        lVar4 = 0;
      }
      else {
        if (iVar3 == 0) goto LAB_07583b7c;
        lVar4 = lVar4 + 0x20;
      }
      lVar10 = 0;
      if (((*(ulong *)(param_2 + 0x18) & 0xffffffff) != 0) && (lVar10 = param_2 + 0x20, iVar9 == 0))
      {
LAB_07583b7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_07583afc;
      iVar3 = (**(code **)(*plVar5 + 0x1d8))
                        (plVar5,lVar4 + (ulong)uVar1,(ulong)uVar2,
                         lVar10 + (ulong)(uint)(param_3 << 1),iVar12,0,
                         *(undefined8 *)(*plVar5 + 0x1e0));
      iVar12 = iVar12 - iVar3;
      param_3 = iVar3 + param_3;
    } while (0 < iVar12);
  }
  return param_4 - iVar12;
}

