// rea decompile_all
// name: System.Collections.BitArray$$CopyTo
// address: 0x7558f50
// body: available
// range: 0x7558f50-0x755942f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75592b8 to 0x75da09c System.Array$$Copy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75592bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75592c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7559370 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7559400 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755940c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_BitArray__CopyTo(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint local_44;
  
  uVar17 = (ulong)param_3;
  if ((DAT_0952196f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_0952196f = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar9,uVar10,0);
    goto LAB_075593ec;
  }
  if ((int)param_3 < 0) {
    local_44 = param_3;
    uVar10 = FUN_03f5c42c(DAT_09535420,&local_44);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar9 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921d350);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar9,uVar8,uVar10,uVar7,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091c3e70);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  iVar4 = System_Array__get_Rank(param_2,0);
  if (iVar4 == 1) {
    lVar6 = thunk_FUN_03f99350(param_2,DAT_091801b8);
    if (lVar6 != 0) {
      uVar3 = *(uint *)(param_1 + 0x18);
      if ((int)uVar3 < 1) {
        if ((-uVar3 & 0x1f) == 0) {
          iVar4 = 0;
          goto LAB_07559290;
        }
        uVar18 = 0xffffffff;
      }
      else {
        uVar18 = uVar3 - 1 >> 5;
        if ((uVar3 & 0x1f) == 0) {
          iVar4 = uVar18 + 1;
LAB_07559290:
          System_Array__Copy(*(undefined8 *)(param_1 + 0x10),0,lVar6,uVar17,iVar4,0);
          return;
        }
      }
      System_Array__Copy(*(undefined8 *)(param_1 + 0x10),0,lVar6,uVar17,uVar18,0);
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        if ((uVar18 < *(uint *)(lVar12 + 0x18)) && (uVar18 + param_3 < *(uint *)(lVar6 + 0x18))) {
          *(uint *)(lVar6 + (long)(int)(uVar18 + param_3) * 4 + 0x20) =
               *(uint *)(lVar12 + (ulong)uVar18 * 4 + 0x20) &
               (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          return;
        }
LAB_075592bc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_075592c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = thunk_FUN_03f99350(param_2,DAT_0917fc88);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_03f99350(param_2,DAT_0917fc40);
      if (lVar6 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar9 = thunk_FUN_03f9944c();
        puVar11 = &DAT_09209d68;
        goto LAB_07559390;
      }
      iVar4 = System_Array__get_Length(param_2,0);
      uVar10 = DAT_0917fc40;
      if (*(int *)(param_1 + 0x18) <= (int)(iVar4 - param_3)) {
        lVar6 = thunk_FUN_03f99350(param_2,DAT_0917fc40);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(param_1 + 0x18);
          if ((int)uVar3 < 1) {
            return;
          }
          lVar12 = *(long *)(param_1 + 0x10);
          if (lVar12 != 0) {
            uVar18 = *(uint *)(lVar12 + 0x18);
            uVar15 = 0;
            lVar16 = (ulong)param_3 << 0x20;
            while ((uVar13 = (uint)(uVar15 >> 5) & 0x7ffffff, uVar13 < uVar18 &&
                   (uVar17 + uVar15 < (ulong)*(uint *)(lVar6 + 0x18)))) {
              lVar1 = lVar16 >> 0x20;
              lVar16 = lVar16 + 0x100000000;
              uVar14 = (uint)uVar15;
              uVar15 = uVar15 + 1;
              *(byte *)(lVar6 + lVar1 + 0x20) =
                   (byte)(*(uint *)(lVar12 + (ulong)uVar13 * 4 + 0x20) >> (ulong)(uVar14 & 0x1f)) &
                   1;
              if (uVar3 == uVar15) {
                return;
              }
            }
            goto LAB_075592bc;
          }
          goto LAB_075592c0;
        }
        goto LAB_07559404;
      }
    }
    else {
      uVar18 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar18 & 7;
      if (-1 < (int)-uVar18) {
        uVar3 = -(-uVar18 & 7);
      }
      iVar4 = 0;
      if (0 < (int)uVar18) {
        iVar4 = (uVar18 - 1 >> 3) + 1;
      }
      iVar5 = System_Array__get_Length(param_2,0);
      uVar10 = DAT_0917fc88;
      if (iVar4 <= (int)(iVar5 - param_3)) {
        lVar6 = thunk_FUN_03f99350(param_2,DAT_0917fc88);
        if (lVar6 == 0) {
LAB_07559404:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_2,uVar10);
        }
        uVar18 = iVar4 - (uint)(0 < (int)uVar3);
        if (0 < (int)uVar18) {
          lVar12 = (ulong)param_3 << 0x20;
          uVar13 = 0;
          uVar15 = 0;
          do {
            lVar16 = *(long *)(param_1 + 0x10);
            if (lVar16 == 0) goto LAB_075592c0;
            uVar14 = (uint)(uVar15 >> 2) & 0x3fffffff;
            if ((*(uint *)(lVar16 + 0x18) <= uVar14) ||
               ((ulong)*(uint *)(lVar6 + 0x18) <= uVar17 + uVar15)) goto LAB_075592bc;
            uVar2 = uVar13 & 0x18;
            uVar15 = uVar15 + 1;
            uVar13 = uVar13 + 8;
            lVar1 = lVar12 >> 0x20;
            lVar12 = lVar12 + 0x100000000;
            *(char *)(lVar6 + lVar1 + 0x20) =
                 (char)(*(int *)(lVar16 + (ulong)uVar14 * 4 + 0x20) >> uVar2);
          } while (uVar18 != uVar15);
        }
        if ((int)uVar3 < 1) {
          return;
        }
        lVar12 = *(long *)(param_1 + 0x10);
        if (lVar12 != 0) {
          uVar13 = uVar18 + 3;
          if (-1 < (int)uVar18) {
            uVar13 = uVar18;
          }
          if (((uint)((int)uVar13 >> 2) < *(uint *)(lVar12 + 0x18)) &&
             (uVar18 + param_3 < *(uint *)(lVar6 + 0x18))) {
            *(byte *)(lVar6 + (int)(uVar18 + param_3) + 0x20) =
                 (byte)(*(int *)(lVar12 + (ulong)(uint)((int)uVar13 >> 2) * 4 + 0x20) >>
                       ((uVar18 & 3) << 3)) & ((byte)(-1 << (ulong)(uVar3 & 0x1f)) ^ 0xff);
            return;
          }
          goto LAB_075592bc;
        }
        goto LAB_075592c0;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09209710);
    System_ArgumentException___ctor(uVar9,uVar10,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    puVar11 = &DAT_09209d60;
LAB_07559390:
    uVar10 = thunk_FUN_03fc39d4(puVar11);
    uVar8 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentException___ctor(uVar9,uVar10,uVar8,0);
  }
LAB_075593ec:
  uVar10 = thunk_FUN_03fc39d4(&DAT_091c3e70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar10);
}

