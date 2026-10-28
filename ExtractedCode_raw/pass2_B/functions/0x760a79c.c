// rea decompile_all
// name: System.TermInfoDriver$$Read
// address: 0x760a79c
// body: available
// range: 0x760a79c-0x760aac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760aabc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760aac0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760aac4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_TermInfoDriver__Read(long param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x26;
  undefined1 auVar15 [16];
  char local_64 [4];
  
  if ((DAT_09522016 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a40);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09522016 = 1;
  }
  local_64[0] = '\0';
  lVar10 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar10,0);
  plVar11 = (long *)System_TermInfoDriver__GetKeyFromBuffer(param_1,1);
  if (plVar11 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    unaff_x26 = 0;
    do {
      if (*(long *)(*plVar11 + 0x40) != *(long *)(DAT_09182a40 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar12 = (ulong *)thunk_FUN_03f99594();
      uVar14 = *puVar12;
      iVar7 = (int)(uVar14 >> 0x20);
      if (iVar7 == 8) {
        if (lVar10 == 0) goto LAB_0760aabc;
        iVar7 = System_Text_StringBuilder__get_Length(lVar10,0);
        if (iVar8 < iVar7) {
          iVar7 = System_Text_StringBuilder__get_Length(lVar10,0);
          System_Text_StringBuilder__set_Length(lVar10,iVar7 + -1,0);
        }
      }
      else {
        if (iVar7 == 0xd) {
          if (lVar10 == 0) goto LAB_0760aabc;
          iVar8 = System_Text_StringBuilder__get_Length(lVar10,0);
        }
        else if (lVar10 == 0) goto LAB_0760aabc;
        System_Text_StringBuilder__Append(lVar10,uVar14 & 0xffffffff,0);
      }
      plVar11 = (long *)System_TermInfoDriver__GetKeyFromBuffer(param_1,1);
    } while (plVar11 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x18);
  bVar4 = false;
  do {
    auVar15 = System_TermInfoDriver__ReadKeyInternal(param_1,local_64);
    cVar5 = local_64[0];
    bVar3 = local_64[0] != '\0';
    iVar7 = auVar15._4_4_;
    if (iVar7 == 8) {
      if (lVar10 == 0) goto LAB_0760aabc;
      iVar9 = System_Text_StringBuilder__get_Length(lVar10,0);
      if (iVar8 < iVar9) {
        iVar9 = System_Text_StringBuilder__get_Length(lVar10,0);
        System_Text_StringBuilder__set_Length(lVar10,iVar9 + -1,0);
        goto LAB_0760a998;
      }
    }
    else {
      if (iVar7 == 0xd) {
        if (lVar10 == 0) goto LAB_0760aabc;
        iVar8 = System_Text_StringBuilder__get_Length(lVar10,0);
      }
      else if (lVar10 == 0) goto LAB_0760aabc;
      System_Text_StringBuilder__Append(lVar10,auVar15._0_8_ & 0xffffffff,0);
LAB_0760a998:
      if (cVar5 != '\0' || bVar4) {
        unaff_x26 = unaff_x26 & 0xffffffff00000000 | auVar15._8_8_ & 0xffffffff;
        System_TermInfoDriver__Echo(param_1,auVar15._0_8_,unaff_x26);
      }
    }
    bVar4 = bVar3 || bVar4;
  } while (iVar7 != 0xd);
  System_TermInfoDriver__EchoFlush(param_1);
  *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
  if ((int)param_4 < 1) {
    param_4 = 0;
  }
  else {
    uVar14 = 0;
    lVar13 = param_3 << 0x20;
    do {
      iVar8 = System_Text_StringBuilder__get_Length(lVar10,0);
      if ((long)iVar8 <= (long)uVar14) {
        param_4 = (uint)uVar14;
        break;
      }
      uVar6 = System_Text_StringBuilder__get_Chars(lVar10,uVar14 & 0xffffffff,0);
      if (param_2 == 0) {
LAB_0760aabc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((ulong)*(uint *)(param_2 + 0x18) <= (param_3 & 0xffffffff) + uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar1 = lVar13 >> 0x1f;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x100000000;
      *(undefined2 *)(param_2 + lVar1 + 0x20) = uVar6;
    } while (param_4 != uVar14);
  }
  iVar8 = System_Text_StringBuilder__get_Length(lVar10,0);
  uVar2 = param_4;
  if ((int)param_4 < iVar8) {
    do {
      uVar6 = System_Text_StringBuilder__get_Chars(lVar10,uVar2,0);
      System_TermInfoDriver__AddToBuffer(param_1,uVar6);
      uVar2 = uVar2 + 1;
      iVar8 = System_Text_StringBuilder__get_Length(lVar10,0);
    } while ((int)uVar2 < iVar8);
  }
  return param_4;
}

