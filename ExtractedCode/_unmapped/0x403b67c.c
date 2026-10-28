// rea decompile_all
// name: FUN_0403b67c
// address: 0x403b67c
// body: available
// range: 0x403b67c-0x403bc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403bc24 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403b67c(long *param_1,ulong param_2)

{
  byte *pbVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  long local_68;
  undefined8 *local_48;
  
  psVar2 = (short *)*param_1;
  uVar10 = param_1[1] - (long)psVar2;
  if (uVar10 < 3) {
    if (uVar10 == 2) goto LAB_0403b6e0;
  }
  else {
    if (*psVar2 == 0x7273 && (char)psVar2[1] == 'N') {
      *param_1 = (long)psVar2 + 3;
      puVar4 = (undefined8 *)FUN_04042b74(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar3 = puVar4;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar6 = FUN_04035dcc(param_1,0);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar7 = pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0403bc24;
          lVar9 = 0;
          *puVar7 = pvVar11;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar3 = &UNK_08fb0188;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar4;
        *(long *)((long)puVar7 + lVar9 + 0x28) = lVar6;
        *(undefined1 *)((long)puVar7 + lVar9 + 0x18) = 0x2d;
        *(ushort *)((long)puVar7 + lVar9 + 0x19) =
             *(ushort *)((long)puVar7 + lVar9 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E'))) {
        lVar6 = FUN_04042cf8(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar4 = pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_0403bc24;
          lVar9 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        puVar7 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
        *puVar7 = &UNK_08fafa88;
        *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar3;
        *(long *)((long)puVar4 + lVar9 + 0x28) = lVar6;
        *(ushort *)((long)puVar4 + lVar9 + 0x19) =
             *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
        puVar3 = puVar7;
      }
      *param_1 = (long)(pcVar8 + 1);
      lVar6 = FUN_04042dd0(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar11 + 8);
      puVar4 = pvVar11;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0403bc24;
        lVar9 = 0;
        *puVar4 = pvVar11;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar4 = &UNK_08fafa88;
      goto LAB_0403bbe0;
    }
LAB_0403b6e0:
    if (*psVar2 == 0x7273) {
      pbVar1 = (byte *)(psVar2 + 1);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        puVar3 = (undefined8 *)FUN_04042cf8(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if ((param_2 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
          do {
            if (puVar4 == (undefined8 *)0x0) {
              pcVar8 = (char *)*param_1;
              puVar7 = puVar3;
              if (pcVar8 != (char *)param_1[1]) goto LAB_0403bb74;
            }
            else {
              pvVar11 = (void *)param_1[0x266];
              lVar6 = *(long *)((long)pvVar11 + 8);
              puVar5 = pvVar11;
              if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
                puVar5 = malloc(0x1000);
                if (puVar5 == (void *)0x0) goto LAB_0403bc24;
                lVar6 = 0;
                *puVar5 = pvVar11;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
              puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
              *puVar7 = &UNK_08fafa88;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar3;
              *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
              *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                   *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
              pcVar8 = (char *)*param_1;
              puVar3 = puVar7;
              if (pcVar8 != (char *)param_1[1]) {
LAB_0403bb74:
                puVar7 = puVar3;
                if (*pcVar8 == 'E') goto LAB_0403bb80;
              }
            }
            puVar3 = (undefined8 *)FUN_04042cf8(param_1);
            puVar4 = puVar7;
            if (puVar3 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          } while( true );
        }
        puVar4 = (undefined8 *)0x0;
        puVar7 = puVar3;
        do {
          puVar3 = (undefined8 *)param_1[0x266];
          lVar6 = puVar3[1];
          if (puVar4 == (undefined8 *)0x0) {
            puVar4 = puVar3;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar4 = malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_0403bc24;
              lVar6 = 0;
              *puVar4 = puVar3;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            puVar4[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
            *puVar3 = &UNK_08fafc48;
            *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
            *(ushort *)((long)puVar4 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) {
LAB_0403ba5c:
              if (*pcVar8 == 'E') goto LAB_0403bb80;
            }
          }
          else {
            puVar5 = puVar3;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = malloc(0x1000);
              if (puVar5 == (void *)0x0) goto LAB_0403bc24;
              lVar6 = 0;
              *puVar5 = puVar3;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            puVar5[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar3 = &UNK_08fafa88;
            *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
            *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) goto LAB_0403ba5c;
          }
          puVar7 = (undefined8 *)FUN_04042cf8(param_1);
          puVar4 = puVar3;
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar3 = (undefined8 *)FUN_04042b74(param_1);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_48 = puVar3;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        local_68 = FUN_04035dcc(param_1,0);
        if (local_68 == 0) {
          return (undefined8 *)0x0;
        }
        puVar3 = (undefined8 *)FUN_04036368(param_1,&local_48,&local_68);
      }
      goto LAB_0403bb88;
    }
  }
  puVar3 = (undefined8 *)FUN_04042dd0(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_2 & 1) == 0) {
    return puVar3;
  }
  pvVar11 = (void *)param_1[0x266];
  lVar6 = *(long *)((long)pvVar11 + 8);
  puVar4 = pvVar11;
  if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) {
LAB_0403bc24:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar4 = pvVar11;
    puVar4[1] = 0;
    param_1[0x266] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
  puVar7 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
  *puVar7 = &UNK_08fafc48;
  *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar3;
  *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
  *(ushort *)((long)puVar4 + lVar6 + 0x19) =
       *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar7;
LAB_0403bb80:
  *param_1 = (long)(pcVar8 + 1);
LAB_0403bb88:
  lVar6 = FUN_04042dd0(param_1);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar11 = (void *)param_1[0x266];
  lVar9 = *(long *)((long)pvVar11 + 8);
  puVar4 = pvVar11;
  if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) goto LAB_0403bc24;
    lVar9 = 0;
    *puVar4 = pvVar11;
    puVar4[1] = 0;
    param_1[0x266] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
  puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
  *puVar4 = &UNK_08fafa88;
LAB_0403bbe0:
  *(undefined1 *)(puVar4 + 1) = 0x17;
  puVar4[2] = puVar3;
  puVar4[3] = lVar6;
  *(ushort *)((long)puVar4 + 9) = *(ushort *)((long)puVar4 + 9) & 0xf000 | 0x540;
  return puVar4;
}

