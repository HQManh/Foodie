// rea decompile_all
// name: System.IO.MemoryStream$$Write
// address: 0x756969c
// body: available
// range: 0x756969c-0x7569933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7569804 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7569808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7569930 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_MemoryStream__Write(long param_1,long param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar7,uVar8,uVar6,0);
    goto LAB_0756991c;
  }
  if ((int)param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092202d8;
  }
  else {
    if (-1 < (int)param_4) {
      if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar7,uVar8,0);
        goto LAB_0756991c;
      }
      System_IO_MemoryStream__EnsureNotClosed();
      System_IO_MemoryStream__EnsureWriteable(param_1);
      iVar3 = *(int *)(param_1 + 0x34);
      iVar2 = iVar3 + param_4;
      if (iVar2 < 0) {
        thunk_FUN_03fc39d4(&DAT_09186188);
        uVar7 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_0920dbf0);
        System_IO_IOException___ctor(uVar7,uVar8);
        goto LAB_0756991c;
      }
      iVar12 = *(int *)(param_1 + 0x38);
      if (iVar2 <= iVar12) goto LAB_07569748;
      if (*(int *)(param_1 + 0x3c) < iVar2) {
        uVar4 = System_IO_MemoryStream__EnsureCapacity(param_1,iVar2);
        if ((iVar12 < iVar3) && ((uVar4 & 1) == 0)) {
          iVar12 = *(int *)(param_1 + 0x38);
LAB_07569730:
          System_Array__Clear(*(undefined8 *)(param_1 + 0x28),iVar12,iVar2 - iVar12,0);
        }
      }
      else if (iVar12 < iVar3) goto LAB_07569730;
      *(int *)(param_1 + 0x38) = iVar2;
LAB_07569748:
      lVar9 = *(long *)(param_1 + 0x28);
      if ((param_4 < 9) && (lVar9 = param_2, *(long *)(param_1 + 0x28) != param_2)) {
        if (param_4 != 0) {
          lVar9 = (ulong)(param_4 + param_3) << 0x20;
          uVar4 = (ulong)param_4;
          do {
            lVar9 = lVar9 + -0x100000000;
            if ((ulong)*(uint *)(param_2 + 0x18) <= ((ulong)param_3 - 1) + uVar4) {
LAB_07569804:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar10 = *(long *)(param_1 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar11 = ((int)uVar4 + *(int *)(param_1 + 0x34)) - 1;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_07569804;
            *(undefined1 *)(lVar10 + (int)uVar11 + 0x20) =
                 *(undefined1 *)(param_2 + (lVar9 >> 0x20) + 0x20);
            bVar1 = 1 < uVar4;
            uVar4 = uVar4 - 1;
          } while (bVar1);
        }
      }
      else {
        System_Buffer__BlockCopy(param_2,param_3,lVar9,*(undefined4 *)(param_1 + 0x34),param_4,0);
      }
      *(int *)(param_1 + 0x34) = iVar2;
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09219b28;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar5);
  uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
  System_ArgumentOutOfRangeException___ctor(uVar7,uVar8,uVar6,0);
LAB_0756991c:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d30d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar8);
}

