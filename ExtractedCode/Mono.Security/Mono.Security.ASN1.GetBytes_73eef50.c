// rea decompile_all
// name: Mono.Security.ASN1$$GetBytes
// address: 0x73eef50
// body: available
// range: 0x73eef50-0x73ef557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ef170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef524 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef540 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef544 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef554 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ef550) */
/* WARNING: Removing unreachable block (ram,0x073ef35c) */

long Mono_Security_ASN1__GetBytes(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  
  if ((DAT_09520e07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09520e07 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0)), 0 < iVar4)) {
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_09181588);
    System_Collections_ArrayList___ctor(plVar6,0);
    plVar7 = *(long **)(param_1 + 0x20);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
      if (plVar7 != (long *)0x0) {
        iVar4 = 0;
        do {
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_073ef090;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_073ef090:
          uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar13 & 1) == 0) {
            plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
            if (plVar7 == (long *)0x0) goto LAB_073ef350;
            lVar12 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_073ef220;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_073ef208;
          }
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_073ef0f8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_073ef0f8:
          plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *plVar9;
          if ((*(byte *)(lVar12 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8 + -8)
              != DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          lVar12 = (**(code **)(lVar12 + 0x178))(plVar9,*(undefined8 *)(lVar12 + 0x180));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*plVar6 + 0x308))(plVar6,lVar12,*(undefined8 *)(*plVar6 + 0x310));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar4 = iVar4 + *(int *)(lVar12 + 0x18);
        } while (plVar7 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_073ef408;
  }
  lVar12 = *(long *)(param_1 + 0x18);
LAB_073ef178:
  if (lVar12 == 0) {
    lVar10 = FUN_03f5c394(DAT_0917fc88,2);
    uVar15 = 0;
  }
  else {
    uVar13 = *(ulong *)(lVar12 + 0x18);
    uVar16 = (uint)uVar13;
    if ((int)uVar16 < 0x80) {
      lVar10 = FUN_03f5c394(DAT_0917fc88,uVar16 + 2);
      System_Buffer__BlockCopy(lVar12,0,lVar10,2,uVar13 & 0xffffffff,0);
    }
    else {
      uVar15 = (undefined1)uVar13;
      if (uVar16 < 0x100) {
        lVar10 = FUN_03f5c394(DAT_0917fc88,uVar16 + 3);
        System_Buffer__BlockCopy(lVar12,0,lVar10,3,uVar13 & 0xffffffff,0);
        if (lVar10 == 0) goto LAB_073ef408;
        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_073ef544;
        *(undefined1 *)(lVar10 + 0x22) = uVar15;
        uVar16 = 0x81;
      }
      else {
        uVar1 = (undefined1)(uVar13 >> 8);
        if (uVar16 >> 0x10 == 0) {
          lVar10 = FUN_03f5c394(DAT_0917fc88,uVar16 + 4);
          System_Buffer__BlockCopy(lVar12,0,lVar10,4,uVar13 & 0xffffffff,0);
          if (lVar10 == 0) goto LAB_073ef408;
          if ((*(uint *)(lVar10 + 0x18) < 3) ||
             (*(undefined1 *)(lVar10 + 0x22) = uVar1, *(uint *)(lVar10 + 0x18) == 3))
          goto LAB_073ef544;
          *(undefined1 *)(lVar10 + 0x23) = uVar15;
          uVar16 = 0x82;
        }
        else {
          uVar2 = (undefined1)(uVar13 >> 0x10);
          if (uVar16 >> 0x18 == 0) {
            lVar10 = FUN_03f5c394(DAT_0917fc88,uVar16 + 5);
            System_Buffer__BlockCopy(lVar12,0,lVar10,5,uVar13 & 0xffffffff,0);
            if (lVar10 == 0) goto LAB_073ef408;
            uVar16 = *(uint *)(lVar10 + 0x18);
            if (((uVar16 < 3) || (*(undefined1 *)(lVar10 + 0x22) = uVar2, uVar16 == 3)) ||
               (*(undefined1 *)(lVar10 + 0x23) = uVar1, uVar16 < 5)) goto LAB_073ef544;
            *(undefined1 *)(lVar10 + 0x24) = uVar15;
            uVar16 = 0x83;
          }
          else {
            lVar10 = FUN_03f5c394(DAT_0917fc88,uVar16 + 6);
            System_Buffer__BlockCopy(lVar12,0,lVar10,6,uVar13 & 0xffffffff,0);
            if (lVar10 == 0) goto LAB_073ef408;
            uVar16 = *(uint *)(lVar10 + 0x18);
            if (((uVar16 < 3) || (*(char *)(lVar10 + 0x22) = (char)(uVar13 >> 0x18), uVar16 == 3))
               || ((*(undefined1 *)(lVar10 + 0x23) = uVar2, uVar16 < 5 ||
                   (*(undefined1 *)(lVar10 + 0x24) = uVar1, uVar16 == 5)))) goto LAB_073ef544;
            *(undefined1 *)(lVar10 + 0x25) = uVar15;
            uVar16 = 0x84;
          }
        }
      }
    }
    uVar15 = (undefined1)uVar16;
    plVar6 = (long *)(param_1 + 0x18);
    if (*plVar6 == 0) {
      *plVar6 = lVar12;
      thunk_FUN_03f5d7b8(plVar6,lVar12);
    }
  }
  if (lVar10 != 0) {
    if ((*(int *)(lVar10 + 0x18) != 0) &&
       (*(undefined1 *)(lVar10 + 0x20) = *(undefined1 *)(param_1 + 0x10),
       *(int *)(lVar10 + 0x18) != 1)) {
      *(undefined1 *)(lVar10 + 0x21) = uVar15;
      return lVar10;
    }
LAB_073ef544:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_073ef408;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_073ef208:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_073ef344;
    }
  }
LAB_073ef220:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_073ef344:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_073ef350:
  lVar12 = FUN_03f5c394(DAT_0917fc88,iVar4);
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    iVar17 = 0;
    iVar4 = 0;
    do {
      iVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
      if (iVar5 <= iVar4) goto LAB_073ef178;
      if ((plVar6 == (long *)0x0) ||
         (lVar10 = (**(code **)(*plVar6 + 0x2e8))(plVar6,iVar4,*(undefined8 *)(*plVar6 + 0x2f0)),
         uVar3 = DAT_0917fc88, lVar10 == 0)) break;
      lVar11 = thunk_FUN_03f99350(lVar10,DAT_0917fc88);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar10,uVar3);
      }
      System_Buffer__BlockCopy(lVar11,0,lVar12,iVar17,*(undefined4 *)(lVar11 + 0x18),0);
      plVar7 = *(long **)(param_1 + 0x20);
      iVar4 = iVar4 + 1;
      iVar17 = iVar17 + *(int *)(lVar11 + 0x18);
    } while (plVar7 != (long *)0x0);
  }
LAB_073ef408:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

