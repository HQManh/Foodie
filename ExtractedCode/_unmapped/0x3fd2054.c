// rea decompile_all
// name: FUN_03fd2054
// address: 0x3fd2054
// body: available
// range: 0x3fd2054-0x3fd254b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd2548 to 0x3fd1308 FUN_03fd1308 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd2054(ulong param_1,ulong param_2,ulong param_3,ulong *param_4,ulong *param_5,
                 ulong param_6)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  
  if (DAT_09748510 != 0) {
    return;
  }
  if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
    FUN_03fcbfa4();
  }
  if (((CONCAT44(DAT_095156d0._4_4_,(uint)DAT_095156d0) == -1) ||
      ((ulong)(1L << ((ulong)(uint)DAT_095156d0 & 0x3f)) < DAT_09748610)) &&
     (FUN_03fd16a4(&DAT_097486d8,&DAT_095156d0), DAT_09535be0 != 0)) {
    FUN_03fcb51c("Grew fo table to %u entries\n",1 << (ulong)((uint)DAT_095156d0 & 0x1f));
  }
  lVar6 = 0;
  puVar7 = (ulong *)0x0;
  do {
    uVar9 = (param_1 >> (CONCAT44(DAT_095156d0._4_4_,(uint)DAT_095156d0) + 3U & 0x3f) ^ param_1 >> 3
            ) & (-1L << ((ulong)(uint)DAT_095156d0 & 0x3f) ^ 0xffffffffffffffffU);
    puVar3 = *(ulong **)(DAT_097486d8 + uVar9 * 8);
    if (puVar3 != (ulong *)0x0) {
      if ((*puVar3 ^ param_1) == 0xffffffffffffffff) {
        puVar8 = (ulong *)0x0;
LAB_03fd2378:
        if (param_5 != (ulong *)0x0) {
          *param_5 = puVar3[3];
        }
        if (param_4 != (ulong *)0x0) {
          *param_4 = puVar3[2];
        }
        iVar2 = DAT_097480f0;
        if (puVar8 == (ulong *)0x0) {
          *(ulong *)(DAT_097486d8 + uVar9 * 8) = puVar3[1];
        }
        else {
          puVar8[1] = puVar3[1];
          if (iVar2 != 0) {
            FUN_0404c050(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                         &DAT_0957c0c8 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8);
          }
        }
        if (param_2 == 0) {
          DAT_09748610 = DAT_09748610 - 1;
          iVar2 = DAT_097480f0;
joined_r0x03fd2478:
          if ((puVar8 != (ulong *)0x0) || (iVar2 == 0)) goto LAB_03fd24d0;
          puVar8 = (ulong *)(DAT_097486d8 + uVar9 * 8);
        }
        else {
          puVar3[2] = param_2;
          iVar2 = DAT_097480f0;
          puVar3[3] = param_3;
          puVar3[5] = param_6;
          if (iVar2 == 0) {
            if (puVar8 != (ulong *)0x0) {
              puVar8[1] = (ulong)puVar3;
              goto LAB_03fd24d0;
            }
LAB_03fd248c:
            *(ulong **)(DAT_097486d8 + uVar9 * 8) = puVar3;
            goto joined_r0x03fd2478;
          }
          FUN_0404c050(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                       &DAT_0957c0c8 + ((ulong)puVar3 >> 0x12 & 0x7fff) * 8);
          if (puVar8 == (ulong *)0x0) goto LAB_03fd248c;
          puVar8[1] = (ulong)puVar3;
        }
        FUN_0404c050(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                     &DAT_0957c0c8 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8);
LAB_03fd24d0:
        if (DAT_097480e0 != 0) {
          DAT_097480e8 = 0;
        }
        if (puVar7 == (ulong *)0x0) {
          return;
        }
        FUN_03fd1308(puVar7);
        return;
      }
      while (puVar8 = puVar3, puVar3 = (ulong *)puVar8[1], puVar3 != (ulong *)0x0) {
        if ((*puVar3 ^ param_1) == 0xffffffffffffffff) goto LAB_03fd2378;
      }
    }
    if (puVar7 != (ulong *)0x0) {
LAB_03fd2270:
      if (param_5 != (ulong *)0x0) {
        *param_5 = 0;
      }
      if (param_4 != (ulong *)0x0) {
        *param_4 = 0;
      }
      puVar7[2] = param_2;
      puVar7[3] = param_3;
      lVar1 = DAT_097486d8;
      puVar7[5] = param_6;
      uVar5 = *(ulong *)(lVar1 + uVar9 * 8);
      puVar7[4] = *(ulong *)(lVar6 + 0x20);
      *puVar7 = ~param_1;
      puVar7[1] = uVar5;
      iVar2 = DAT_097480f0;
      *(ulong **)(lVar1 + uVar9 * 8) = puVar7;
      DAT_09748610 = DAT_09748610 + 1;
      if (iVar2 != 0) {
        uVar9 = DAT_097486d8 + uVar9 * 8;
        FUN_0404c050(1L << (uVar9 >> 0xc & 0x3f),&DAT_0957c0c8 + (uVar9 >> 0x12 & 0x7fff) * 8);
      }
      if (DAT_097480e0 != 0) {
        DAT_097480e8 = 0;
      }
      if (iVar2 == 0) {
        return;
      }
      FUN_0404c050(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                   &DAT_0957c0c8 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8);
      return;
    }
    plVar4 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
    if (param_2 == 0) {
LAB_03fd2340:
      if (param_5 != (ulong *)0x0) {
        *param_5 = 0;
      }
      if (param_4 != (ulong *)0x0) {
        *param_4 = 0;
      }
      if (DAT_097480e0 == 0) {
        return;
      }
      DAT_097480e8 = 0;
      return;
    }
    do {
      lVar6 = *plVar4;
      plVar4 = (long *)(lVar6 + 0x2018);
    } while (*(ulong *)(lVar6 + 0x2010) != param_1 >> 0x16 && lVar6 != DAT_09535c90);
    lVar6 = *(long *)(lVar6 + (param_1 >> 0xc & 0x3ff) * 8);
    if (lVar6 == 0) goto LAB_03fd2340;
    puVar7 = (ulong *)FUN_03fcc3a4(0x30,1);
    if (puVar7 != (ulong *)0x0) goto LAB_03fd2270;
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
    puVar7 = (ulong *)(*(code *)PTR_FUN_09515640)(0x30);
    if (puVar7 == (ulong *)0x0) {
      return;
    }
    if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
      FUN_03fcbfa4();
    }
  } while( true );
}

